// CIS22b
// Lab04
// Name:

/*
Program description: This program demonstrates the functionality of
the minimum(), maximum(), getAbsolute() and total() template
functions when tested with with different data types.


The minimum() template returns the lowest of two passed values.  
The maximium() template returns the highest of two passed values.  
					
The getAbsoluteValue() template returns the absolute value of the passed number
The total() template gets user input for values and then returns the sum of all the values entered.

*/

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>

using namespace std;

//Template to find the minimum value of two variables
//Accepts 2 parameters of type T
//Returns the smallest
//Works with all types that have a < operator (int, double, char, string)
template <class T>
T minimum(T number1, T number2)  
{
	return (number1 < number2) ? number1 : number2;
}


//Template to find maximum value of two variables
//Accepts 2 parameters type T
//Returns the largest 
//Works with all types that have a < operator (int, double, char, string)
template <class T>
T maximum(T number1, T number2)  
{
	return (number1<number2) ? number2 : number1;
}


//Template to absolute value function
//Accepts single parameter of type T
//Returns the absolute value for the passed value 
//Works with all types that can be compared with a "< 0" and have a - operator (not strings)
template <class T>
T getAbsoluteValue(T args)
{
	if (args < 0)
	{
		args = -args;
	}
	return args;
}


//Template to keep a running total of values entered by the user, then return the sum of all the values entered
//Will return a type T and takes an int as argument
// The int argument represents the number of values the user will enter.
//T cannot be a string because strings can't be set to 0
//cin needs to support type T
template <typename T>
T total(int numInputs)
{
	T temp = 0;
	T runningTotal = 0;
	for (int count = 0; count < numInputs; count++)
	{
		cout << "Enter a number for value number " << count+1 << ": ";  
		cin >> temp;
		cin.ignore();
		runningTotal += temp;
	}
	return runningTotal;
}


int main()
{
	int intergerA = 12, intergerB = 15; 
	double doubleC = 15.6, doubleD = 2.43;
	char characterE = 'f', characterF = 'o';
	string stringG = "foo", stringH = "bar";

	// Demonstrating minimum template
	cout << "Demonstrating minimum() template: " << endl; 
	cout << "__________________________" << endl;
	cout << "Type    " << "Values" << "      Result" << endl;
	cout << "__________________________" << endl;
	cout << "Ints    " << intergerA << ", " << intergerB << "      " << minimum(intergerA, intergerB) << endl;
	cout << "Double  " << doubleC << ", " << doubleD << "  " << minimum(doubleC, doubleD) << endl;
	cout << "Char    " << characterE << ", " << characterF << "        " << minimum(characterE, characterF) << endl;
	cout << "String  " << stringG << ", " << stringH << "     " << minimum(stringG, stringH) << endl;

	cout << endl << endl;

	// Demonstrating maximum template
	cout << "Demonstrating maximum() template: " << endl;
	cout << "__________________________" << endl;
	cout << "Type    " << "Values" << "      Result" << endl;
	cout << "__________________________" << endl;
	cout << "Ints    " << intergerA << ", " << intergerB << "      " << maximum(intergerA, intergerB) << endl;
	cout << "Double  " << doubleC << ", " << doubleD << "  " << maximum(doubleC, doubleD) << endl;
	cout << "Char    " << characterE << ", " << characterF << "        " << maximum(characterE, characterF) << endl;
	cout << "Strings " << stringG << ", " << stringH << "     " << maximum(stringG, stringH) << endl;

	cout << endl << endl;


	int intergerJ = -12, intergerK = 0;  
	double doubleL = -15.6;
	char characterM = -50;

	// Demonstrating getAbsoluteValue template
	cout << "Demonstrating getAbsoluteValue() template: " << endl;
	cout << "________________________________" << endl;
	cout << "Type               " << "Value" << "  Result" << endl;
	cout << "________________________________" << endl;
	cout << "Positive int       " << intergerA << "     " << getAbsoluteValue(intergerA) << endl;
	cout << "Negative int      " << intergerJ << "     " << getAbsoluteValue(intergerJ) << endl;
	cout << "Positive double    " << doubleC << "   " << getAbsoluteValue(doubleC) << endl;
	cout << "Negative double   " << doubleL << "   " << getAbsoluteValue(doubleL) << endl;
	cout << endl << endl;;


	// Demonstrating total template
	cout << "Demonstrating total() template: " << endl;
	cout << "_______________________________" << endl;

	int totalInt = 0;
	double totalDouble = 0;

	cout << "Running total for two integer values:" << endl;
	totalInt = total<int>(2);
	cout << "Running total is: " << totalInt << endl << endl;

	cout << "_________________________" << endl;
	cout << "Running total for three double values: " << endl;
	totalDouble = total<double>(3); 
	cout << "Running total is: " << totalDouble << endl;


	cout << endl;
	cout << "press Enter to close the program ...";
	cin.get();
	return 0;
}
