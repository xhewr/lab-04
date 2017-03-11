// clifford - it has the basic parts here.  The lab wants us to split the templates off into their own files, which I did not do.
// Also, lots of stuff is hard coded so tweak the stuff to your desires.


#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<string>

using namespace std;

template <class min>
min findMinimum(min number1, min number2)
{
	//Minimum temp = number1;
	if (number1 < number2)
	{
		return number1;
	}
	else
	{
		return number2;
	}
}

template <class max>
max findMaximum(max number1, max number2)
{
	if (number1 > number2)
	{
		return number1;
	}
	else
	{
		return number2;
	}
}

template <class AbsVal>
AbsVal findAbsoluteValue(AbsVal args)
{
	if (args < 0)
	{
		args -= args + args;
	}
	return args;
}

template <class Ttotal>
Ttotal total(Ttotal args1)
{
	Ttotal temp = 0;
	Ttotal runningTotal = 0;
	for (int count = 0; count < args1; count++)
	{
		cout << "enter in a value: ";
		cin >> temp;  // clifford - this is tricky bit here.  if you start with an int, then try to read 2.1 or some number with decimal point
					  // it doesn't like it
		cin.ignore();
		runningTotal += temp;
	}
	return runningTotal;
}


int main()
{
	cout << findMinimum(12, 15) << endl;
	cout << findMinimum(15.6, 2.43) << endl;
	cout << findMinimum('f', 'o') << endl;
	cout << findMinimum("fu", "Bar") << endl;

	cout << endl;

	cout << findMaximum(12, 15) << endl;
	cout << findMaximum(15.6, 2.43) << endl;
	cout << findMaximum('f', 'o') << endl;
	cout << findMaximum("fu", "Bar") << endl;

	cout << endl;

	cout << findAbsoluteValue(12) << endl;
	cout << findAbsoluteValue(-12) << endl;
	cout << findAbsoluteValue(18.2) << endl;
	cout << findAbsoluteValue(-18.2) << endl;
	cout << findAbsoluteValue(0) << endl;

	cout << endl;

	cout << "running total is: " << total(2) << endl;
	cout << "running total is: " << total(4) << endl;

	cin.get();
	return 0;
}


