// clifford - it has the basic parts here.  The lab wants us to split the templates off into their own files, which I did not do.
// Also, lots of stuff is hard coded so tweak the stuff to your desires.

// Fabiane: by convention all template parameters types are uppercase and usually called T (for Type)
// I left a few comments just to share a few peculiarities that I figured out along the way
// Did some formatting to the main and added a char to findAbsolute() testing
// I can split the headers tomorrow after you review this version


#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<string>

using namespace std;



//F:Will work with all types that have a < operator (int, double, char, string)
template <class T>
T findMinimum(T number1, T number2)
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
}   // Fabiane: optional shorter code -> return (number1<number2)?number1:number2;



//F:Will work with all types that have a < operator (int, double, char, string)
template <class T>
T findMaximum(T number1, T number2)
{
    if (number1 < number2)
    {
        return number2;
    }
    else
    {
        return number1;
    }
}// Fabiane: optional shorter code -> return (number1<number2)?number2:number1;


//F:Will work for all types that can be compared with  "< 0" and have a - operator (not strings)
template <class T>
T findAbsoluteValue(T args)
{
    if (args < 0)
    {
        args = -args; //Fabiane: Yours wasn't wrong, but could be simplified.
    }
    return args;
}

//F:Will return a type T and takes an int as argument
//T cannot be a string because strings can't be set to 0
//cin needs to support type T
template <typename T>
T total(int numInputs) //Fabiane: parameter is type int, not T, because it's the number of arguments to be used on the for loop, which is always an integer
{
    T temp = 0;
    T runningTotal = 0;
    for (int count = 0; count < numInputs; count++)
    {
        cout << "Enter value: ";
        cin >> temp;  // clifford - this is tricky bit here.  if you start with an int, then try to read 2.1 or some number with decimal point
        // it doesn't like it
        
        // Fabiane: this will depend on the type of instatiation that you do on your main.
        // If you instatiate it as an int, you can only input ints, because the . (point)  present in the double isn't part of int data type, ex: 2.6 as input is treated as numbers 2 and 6. (the cin.ignore() gets rid of the point here)

        // If you instantiate it as double, then you can input doubles, because whole numbers (like 1 or 2) are just doubles without a point.
        runningTotal += temp;
    }
    return runningTotal;
}


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
    
    
    int i = -12 , j = 0;
    double k = -15.6;
    char ch = -50;
    
    // Demonstrating findAbsoluteValue template
    cout << "Demonstrating findAbsoluteValue() template: " << endl;
    cout << "________________________________" << endl;
    cout << "Type               " << "Value" << "  Result" << endl;
    cout << "________________________________" << endl;
    cout << "Positive int       " << a << "     " << findAbsoluteValue(a) << endl;
    cout << "Negative int      " << i << "     " << findAbsoluteValue(i) << endl;
    cout << "Positive double    " << c << "   "  << findAbsoluteValue(c) << endl;
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
    totalInt = total<int>(2);  //Fabiane: in Xcode I couldn't just rely on auto type deduction, so I had to instatiate the template explicitly. I guess it worked well on VS. I will change this back.
    cout << "Total: " << totalInt << endl << endl;
    
    cout << "_________________________" << endl;
    cout << "Running total for double: " << endl;
    totalDouble = total<double>(4);
    cout << "Total: " << totalDouble << endl;
    
    
    cin.get();
    return 0;
}
