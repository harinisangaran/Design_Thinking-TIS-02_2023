// Harini_Set2

#include <iostream>
using namespace std;


void monthlyInstallment (double a, double b, double c, double d) {
	double interest, installment;
	interest = (c/100)*(a-b)*d;
	installment = ((a-b)+interest)/(d*12);
	cout << "MONTHLY INSTALLMENT (MYR): " << installment;
}


int main () {
	int model, variant, region;
	char option = 'Y';
	double initialPrice, downPayment, rate, period;
	
	while ((option == 'Y') || (option == 'y')) {
		cout << "Proton Car Loan Calculator \n\n";
		cout << "Model [1-X50, 2-Exora, 3-Persona]: ";
		cin >> model;
		cout << "Variants [1-1.6L Standard CVT, 2-1.6L Premium CVT]: ";
		cin >> variant;
		cout << "Region [1-Peninsular Malaysia, 2-East Malaysia]: ";
		cin >> region;
		cout << "\nCar Info";
	
		if ((model >=1) && (model <= 3)) {
			if (model == 1)
				cout << "\nModel: X50";
			else {
				if (model == 2)
					cout << "\nModel: Exora";
				else 
					cout << "\nModel: Persona";
			}	
		}
	
		if ((variant >=1) && (variant <= 2)) {
			if (variant == 1)
				cout << "\nVariant: 1.6L Standard CVT";
			else 
				cout << "\nVariant: 1.6L Premium CVT";
		}
	
		if ((region >=1) && (region <= 2)) {
			if (region == 1) {
				cout << "\nRegion: Peninsular Malaysia";
				cout << "\nPaint Type: Metallic";
			}
			else {
				cout << "\nRegion: East Malaysia";
				cout << "\nPaint Type: Metallic";
			}
		}
	
		if ((model >=1) && (model <= 3)) {
			if (model == 1) {
				if ((variant >=1) && (variant <= 2)) {
					if (variant == 1) {
						if ((region >=1) && (region <= 2)) {
							if (region == 1) {
								cout << "\nPrice (MYR): 86300.00";
								initialPrice = 86300.00;
							}
							else {
								cout << "\nPrice (MYR): 88300.00";
								initialPrice = 88300.00;
							}
						}
					}
					else {
						if ((region >=1) && (region <= 2)) {
							if (region == 1) {
								cout << "\nPrice (MYR): 101800.00";
								initialPrice = 101800.00;
							}
							else {
								cout << "\nPrice (MYR): 103800.00";
								initialPrice = 103800.00;
							}
						}
					}
				}
			}
			else {
				if (model == 2) {
					if ((variant >=1) && (variant <= 2)) {
						if (variant == 1) {
							if ((region >=1) && (region <= 2)) {
								if (region == 1) {
									cout << "\nPrice (MYR): 62800.00";
									initialPrice = 62800.00;
								}
								else {
									cout << "\nPrice (MYR): 65300.00";
									initialPrice = 65300.00;
								}
							}
						}
						else {
							if ((region >=1) && (region <= 2)) {
								if (region == 1) {
									cout << "\nPrice (MYR): 69800.00";
									initialPrice = 69800.00;
								}
								else {
									cout << "\nPrice (MYR): 72300.00";
									initialPrice = 72300.00;
								}
							}	
						}
					}
				}
				else {
					if ((variant >=1) && (variant <= 2)) {
						if (variant == 1) {
							if ((region >=1) && (region <= 2)) {
								if (region == 1) {
									cout << "\nPrice (MYR): 47800.00";
									initialPrice = 47800.00;
								}
								else {
									cout << "\nPrice (MYR): 49800.00";
									initialPrice = 49800.00;
								}
							}
						}
						else {
							if ((region >=1) && (region <= 2)) {
								if (region == 1) {
									cout << "\nPrice (MYR): 54600.00";
									initialPrice = 54600.00;
								}
								else {
									cout << "\nPrice (MYR): 60300.00";
									initialPrice = 60300.00;
								}
							}
						}
					}
				}
			}	
		}
	
		if (((model >=1) && (model <=3)) && ((variant >= 1) && (variant <= 2)) && ((region >= 1) && (region <= 2))) {
			cout << "\n\nDown Payment (MYR): ";
			cin >> downPayment;
			cout << "Interest Rate (%): ";
			cin >> rate;
			cout << "Repayment period (in years): ";
			cin >> period;
	
			monthlyInstallment (initialPrice, downPayment, rate, period);
		}
		
		cout << "\n\nDo you want to enter other data? [Y @ N]: ";
		cin >> option;
	}
	
	cout << "\nThank you :)";
}
