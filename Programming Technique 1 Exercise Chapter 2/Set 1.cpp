//Set 1
#include <iostream>
using namespace std;

int main ()
{
    string number;
    int a, i = 0, sum = 0;
    cout <<"Enter an integer number: ";
    cin >> number;
    a = number.size();
    
    do {
        a--;
        sum = sum + (number[a] - '0');
    }   while (a-1>=i);

    a = number.size();
    do {
        a--;
        cout << number[a] << " + ";
    } while (a-1>i);

    cout << number[a-1] << " = " << sum << "\n";
    if (sum % 3 == 0) {
        if (sum % 4 == 0) {
            if (sum % 5 == 0)
                cout << number << " is multiples of 3, 4 and 5";
            else
                cout << number << " is multiples of 3 and 4";
        }
        else {
            if (sum % 5 == 0)
                cout << number << " is multiples of 3 and 5";
            else
                cout << number << " is multiples of 3";
        }
    }
    else {
        if (sum % 4 == 0) {
            if (sum % 5 == 0)
                cout << number << " is multiples of 4 and 5";
            else
                cout << number << " is multiples of 4";
        }
        else {
            if (sum % 5 == 0)
                cout << number << " is multiples of 5";
        }
    }
}
