//Set 3
#include <iostream>
using namespace std;

int main ()
{
	string number;
	int a, i = 0, sum = 0, multiply = 1;
	cout <<"Enter an integer number: ";
	cin >> number;
	a = number.size();
	
	while (a-1>=i) {
		a--;
		sum = 0 + (number[a] - '0');
		multiply = multiply * sum; 
	}
	
	a = number.size();
	
	while (a-1>i) {
		a--;
		cout << number[a] << " * ";
	}
	
	cout << number[0] << " = " << multiply << "\n";
	
	if (multiply % 4 == 0) {
		if (multiply % 5 ==0) {
			if (multiply % 7 == 0)
				cout << multiply << " is multiples of 4, 5 and 7";
			else 
				cout << multiply << " is multiples of 4 and 5";
		}
		else {
			if (multiply % 7 == 0)
				cout << multiply << " is multiples 4 and 7";
			else 
				cout << multiply << " is multiples of 4";
		}
	}
	else {
		if (multiply % 5 == 0) {
			if (multiply % 7 == 0) 
				cout << multiply << " is multiples of 5 and 7";
			else 
				cout << multiply << " is multiples of 5";
		}
		else {
			if (multiply % 7 == 0)
				cout << multiply << " is multiples of 7";
		}
	}
}
