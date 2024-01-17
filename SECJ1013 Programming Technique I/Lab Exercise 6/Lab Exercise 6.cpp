// Lab Exercise 6
// Name : Harini A/P Sangaran
// Matrics Number : A23CS0081
// Date of Submission : 28/12/2023

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int numData = 8, highTemp = 0, midTemp = 0, lowTemp = 0;
char gradeTemp[8];
double F[8], C[8], averageTemp, sum = 0;


void readFile ();
void computeC (int a, double b);
double average (double c, int d);
char grade (int e, double f);
void writeFile (double h, double j, char k);
void outputData (double m, int n, int p, int q);


void readFile () {
	fstream fahrenheit ("fahrenheit data.txt", ios::in);
	for (int i = 0; i < numData; i++)
		fahrenheit >> F[i];
	fahrenheit.close();
}

void computeC (int a, double b) {
	C[a] = ((5.0/9)*(b-32));
	sum += C[a];
}

double average (double c, int d) {
	averageTemp = c/d;
	return averageTemp;
}

char grade (int e, double f) {
	if (f >= 35) {
		gradeTemp[e] = 'H';
		highTemp += 1;
	}
	else {
		if ((f < 35) && (f >= 20)) {
			gradeTemp[e] = 'M';
			midTemp += 1;
		}
		else {
			gradeTemp[e] = 'L';
			lowTemp += 1;
		}
	}
	return gradeTemp[e];
}

void writeFile (double h, double j, char k) {
	cout << "   " << showpoint << setprecision(4) << h << "\t   " << setprecision(5) << j << "\t    " << k << endl;
}

void outputData (double m, int n, int p, int q) {
	ofstream detailOutput;
	detailOutput.open("Detailed Output.txt", ios::out);
	detailOutput << "Average of the temperature in Celcius: " << setprecision(3) << m << endl;
	detailOutput << "Number of high temperature: " << n << endl;
	detailOutput << "Number of medium tempretaure: " << p <<endl;
	detailOutput << "Number of low temperature: " << q << endl;
	detailOutput << endl << "C(Celcius)\tF(Farenheit)\tDescription" << endl;
	detailOutput << "==========\t============\t===========" << endl;
	for (int i = 0; i < numData; i++) {
		detailOutput << endl;
		detailOutput << "   " << showpoint << setprecision(4) << C[i] << "\t   " << setprecision(5) << F[i] << "\t    " << gradeTemp[i] << endl;
	}
	detailOutput.close();
}

int main () {
	readFile ();
	for (int i = 0; i < numData; i++) {
		computeC (i, F[i]);
		grade (i, C[i]);
	}
	average (sum, numData);
	cout << "C(Celcius)\tF(Farenheit)\tDescription" << endl;
	cout << "==========\t============\t===========" << endl;
	for (int i = 0; i < numData; i++) {
		cout << endl;
		writeFile (C[i], F[i], gradeTemp[i]);
	}
	outputData (averageTemp, highTemp, midTemp, lowTemp);
}
