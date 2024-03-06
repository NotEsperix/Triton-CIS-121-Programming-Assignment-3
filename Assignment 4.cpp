/******************************************
* Edgardo Richard Ventura                 *
* Week 3                                  *
* Assignment 4                            *
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
	string sname;
	double pprice, cprice, change;
	// input phase
	cout << " Enter stock name: ";
	cin >> sname;
	cout << "Enter " << sname << " Purchased Price: $";
	cin >> pprice;
	cout << " Enter " << sname << " Current Price: $";
	cin >> cprice;
	// process phase
	// assignment statement = calculation
	change = ((cprice - pprice) / pprice) * 100;
	//output phase
	cout << setprecision(2) << fixed;
	cout << sname << "'s percentage change from " << pprice << " and " << cprice << " is a difference of: " << change << "%" << endl;
	return 0;
} // End of main