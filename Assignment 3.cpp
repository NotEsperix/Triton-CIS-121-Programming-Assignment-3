/******************************************
* Edgardo Richard Ventura                 *
* Week 3                                  *
* Assignment 3                            *
* Frank Alvino                            *
* CIS 121-061                             *
*******************************************/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	// define variables
	// syntax data type variable name
	double total, tip, bill;
	float t15 = 0.15f;
	// input phase
	cout << "Enter the total for the meal: $";
	cin >> total;
	// process phase
	// assignment statement = calculation
	tip = total * t15;
	bill = total + tip;
	//output phase
	cout << setprecision(2) << fixed;
	cout << "\nYour meal total is: $" << total << "\n15 % gratuity tip : $" << tip << "\n Total with tip : $" << bill << endl;
	return 0;
} // End of main