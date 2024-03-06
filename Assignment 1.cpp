/******************************************
* Edgardo Richard Ventura                 *
* Week 3                                  *
* Assignment 1                            *
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
	string fname, lname;
	float fexsc, sexsc, total_sc;
	float fev = 0.6f;
	float sev = 0.4f;
	// input phase
	cout << " Enter students first name: ";
	cin >> fname;
	cout << " Enter students last name: ";
	cin >> lname;
	cout << " Enter the first exam score: ";
	cin >> fexsc;
	cout << "Enter the second exam score: ";
	cin >> sexsc;
	// process phase
	// assignment statement = calculation
	total_sc = (fexsc * fev) + (sexsc * sev);
	//output phase
	cout << setprecision(2) << fixed;
	cout << "\n" << fname << " " << lname << " achieved a combined exam score of: " << total_sc << "%" << endl;
	return 0;
} // End of main