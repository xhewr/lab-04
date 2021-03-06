// findMaximum.h

#ifndef FINDMAXIMUM_H
#define FINDMAXIMUM_H

//Template to find maximum value function
//Accepts 2 parameters type T
//Returns the largest 
//Works with all types that have a < operator (int, double, char, string)
template <class T>
T findMaximum(T number1, T number2)
{
	return (number1<number2) ? number2 : number1;
}

#endif
