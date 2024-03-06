/******************************************
* Edgardo Richard Ventura                 *
* Week 3                                  *
* Assignment 5                            *
* Frank Alvino                            *
* CIS 121-061                             *
*******************************************/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	// define variable
	float bep, fixed_cost, price_per_unit, cost_per_unit;
	// input
	cout << "Enter your fixed costs: ";
	cin >> fixed_cost;
	cout << "Enter price per unit: ";
	cin >> price_per_unit;
	cout << "Enter cost per unit: ";
	cin >> cost_per_unit;
	// process
	bep = fixed_cost / (price_per_unit - cost_per_unit);
	// output
	cout << setprecision(2) << fixed;
	cout << "You have to sell: " << bep << " to break even" << endl;
	return 0;
}