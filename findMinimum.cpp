// findMinimum.cpp

#define _CRT_SECURE_NO_WARNINGS

//Template to find minimum value function
//Accepts 2 parameters of type T
//Returns the smallest
//Works with all types that have a < operator (int, double, char, string)

template <class T>
T findMinimum(T number1, T number2)
{
	return (number1 < number2) ? number1 : number2;
}
