// CIS22b
// Lab04
// Name:

/*
Program description: This program demonstrates the functionality of
the findMinimum(), findMaximum(), findAbsolute() and total() template 
functions when tested with with different data types.

*/

#define _CRT_SECURE_NO_WARNINGS
#include "findMinimum.h"
#include "findMaximum.h"
#include "findAbsolute.h"
#include "total.h"
#include <iostream>
#include<string>

using namespace std;

int main()
{
	int a = 12, b = 15;
	double c = 15.6, d = 2.43;
	char e = 'f', f = 'o';
	string g = "fu", h = "Bar";

	// Demonstrating findMinimum template
	cout << "Demonstrating findMinimum() template: " << endl;
	cout << "__________________________" << endl;
	cout << "Type    " << "Values" << "      Result" << endl;
	cout << "__________________________" << endl;
	cout << "Ints    " << a << ", " << b << "      " << findMinimum(a, b) << endl;
	cout << "Double  " << c << ", " << d << "  " << findMinimum(c, d) << endl;
	cout << "Char    " << e << ", " << f << "        " << findMinimum(e, f) << endl;
	cout << "String  " << g << ", " << h << "     " << findMinimum(g, h) << endl;

	cout << endl << endl;

	// Demonstrating findMaximum template
	cout << "Demonstrating findMaximum() template: " << endl;
	cout << "__________________________" << endl;
	cout << "Type    " << "Values" << "      Result" << endl;
	cout << "__________________________" << endl;
	cout << "Ints    " << a << ", " << b << "      " << findMaximum(a, b) << endl;
	cout << "Double  " << c << ", " << d << "  " << findMaximum(c, d) << endl;
	cout << "Char    " << e << ", " << f << "        " << findMaximum(e, f) << endl;
	cout << "Strings " << g << ", " << h << "     " << findMaximum(g, h) << endl;

	cout << endl << endl;


	int i = -12, j = 0;
	double k = -15.6;
	char ch = -50;

	// Demonstrating findAbsoluteValue template
	cout << "Demonstrating findAbsoluteValue() template: " << endl;
	cout << "________________________________" << endl;
	cout << "Type               " << "Value" << "  Result" << endl;
	cout << "________________________________" << endl;
	cout << "Positive int       " << a << "     " << findAbsoluteValue(a) << endl;
	cout << "Negative int      " << i << "     " << findAbsoluteValue(i) << endl;
	cout << "Positive double    " << c << "   " << findAbsoluteValue(c) << endl;
	cout << "Negative double   " << k << "   " << findAbsoluteValue(k) << endl;
	cout << "Int                 " << j << "      " << findAbsoluteValue(j) << endl;
	cout << "Char              " << int(ch) << "     " << int(findAbsoluteValue(ch)) << endl;

	cout << endl << endl;;


	// Demonstrating total template
	cout << "Demonstrating total() template: " << endl;
	cout << "_______________________________" << endl;

	int totalInt = 0;
	double totalDouble = 0;

	cout << "Running total for int:" << endl;
	totalInt = total<int>(2);  //Fabiane: Tested on VS, but also had to instatiate the template explicitly.
	cout << "Total: " << totalInt << endl << endl;

	cout << "_________________________" << endl;
	cout << "Running total for double: " << endl;
	totalDouble = total<double>(4);
	cout << "Total: " << totalDouble << endl;


	cin.get();
	cin.get();
	return 0;
}