// total.h

#ifndef TOTAL_H
#define TOTAL_H

//Template to total value function
//Will return a type T and takes an int as argument
//T cannot be a string because strings can't be set to 0
//cin needs to support type T
template <typename T>
T total(int numInputs)
{
	T temp = 0;
	T runningTotal = 0;
	for (int count = 0; count < numInputs; count++)
	{
		cout << "Enter value: ";
		cin >> temp;
		cin.ignore();
		runningTotal += temp;
	}
	return runningTotal;
}

#endif
