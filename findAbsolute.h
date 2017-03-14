// findAbsolute.h

#ifndef FINDABSOLUTE_H
#define FINDABSOLUTE_H

//Template to absolute value function
//Accepts single parameter of type T
//Returns the absolute value for the passed value 
//Worls with all types that can be compared with a "< 0" and have a - operator (not strings)
template <class T>
T findAbsoluteValue(T args)
{
	if (args < 0)
	{
		args = -args;
	}
	return args;
}

#endif
