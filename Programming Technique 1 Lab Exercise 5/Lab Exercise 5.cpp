/*Lab Exercise 5
  Name : Harini A/P Sangaran
  Matrics Number : A23CS0081
  Submission Date : 14/12/2023 */
  
#include <iostream>
using namespace std;
 
int totalCases, newCases, totalDeath, totalRecovered, total = 0, highest = 0, numberOfStates = 0;
char state[14];
string highestState;


//Task 6

void dispStatus (int a);
void getInput ();
void dispOutput (int f, int g, int h, int i);
double calcAverage (int j, int k);

//Task 1

void dispStatus (int a) {
	if (a > 40) {
		cout << "Active cases    : " << a << endl;
		cout << "Status          : Red zone" << endl;
	}
	else {
		if ((a >= 21) &&  (a <= 40)) {
			cout << "Active cases    : " << a << endl;
			cout << "Status          : Orange zone" << endl;
		}
		else {
			if ((a >= 1) && (a <= 20)) {
				cout << "Active cases    : " << a << endl;
				cout << "Status          : Yellow zone" << endl;
			}
			else {
				cout << "Active cases    : 0 " << endl;
				cout << "Status          : Green zone" << endl;
			}
		}
	}
}

//Task 2

void getInput () {
	cout << "Total cases     : ";
	cin >> totalCases;
	cout << "New cases       : ";
	cin >> newCases;
	cout << "Total death     : ";
	cin >> totalDeath;
	cout << "Total recovered : ";
	cin >> totalRecovered;
}

//Task 3

void dispOutput (int f, int g, int h, int i) {
	int activeCases = (f+g-h-i);
	total = total + activeCases;
	if (activeCases > highest) {
		highest = activeCases;
		highestState = state;
	}
	dispStatus (activeCases);
}

//Task 4

double calcAverage (int j, int k) {
	double average = k/j;
	return average;
}

//Task 5

int main () {
	cout << "<<<<<<<<<<<<<< DATA >>>>>>>>>>>>>" << endl;
	cout << "State name      : ";
	cin.get(state, 20);
	numberOfStates = numberOfStates + 1;
	getInput();
	cout << endl << "<<<<<<<<<<<<< SUMMARY >>>>>>>>>>>" << endl;
	dispOutput (totalCases, newCases, totalDeath, totalRecovered);
	cout << endl << "Press <ENTER> to continue...";
	cin.get();
	while (cin.get() == '\n'){
		cout << endl << endl << "<<<<<<<<<<<<<< DATA >>>>>>>>>>>>>" << endl;
		cout << "State name      : ";
		cin.get(state, 20);
		numberOfStates = numberOfStates + 1;
		getInput ();
		cout << endl << "<<<<<<<<<<<<< SUMMARY >>>>>>>>>>>" << endl;
		dispOutput (totalCases, newCases, totalDeath, totalRecovered);
		cout << endl << "Press <ENTER> to continue...";
		cin.get();
	}
	cout << endl << endl << "<<<<<<<<< ACTIVE CASES >>>>>>>>>>>" << endl;
	cout << "Total   : " << total << endl;
	cout << "Highest : " << highest << " (" << highestState << ")" << endl;
	cout << "Average for " << numberOfStates << " states : " << calcAverage (numberOfStates, total) << endl;
}
