/******************************************
* Edgardo Richard Ventura                 *
* Week 3                                  *
* Assignment 2                            *
* Instructor: Frank Alvino                *
* CIS 121-061                             *
*******************************************/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	// define variables
	// syntax data type variable name
	string sname, uname;
	double price, quantity, port_value;
	// input phase
	cout << " Enter your portfolio user: ";
	cin >> uname;
	cout << " Enter stock aquisition Name: ";
	cin >> sname;
	cout << "Enter the current stock price: $";
	cin >> price;
	cout << " Enter the quantity of stock: ";
	cin >> quantity;
	// process phase
	// assignment statement = calculation
	port_value = price * quantity;
	//output phase
	cout << setprecision(3) << fixed;
	cout << "Current value of the " << sname << " stock(s) in your " << uname << " portfolio is: $" << port_value << endl;
	return 0;
} // End of main