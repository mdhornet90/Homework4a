
// INTDemo.cpp - INT class test code
//
// Adjust the includes and main declaration for your development environment...

#include "INT.h"

#include <iostream>
using std::cout;
using std::endl;
using namespace std;

#include <cstdlib>
using std::abs;

// note - you may need to change the definition of the main function to
// be consistent with what your C++ compiler expects.
int main(void)
{
    cout << endl << "A test of the INT class  (9/6/08)" << endl << endl;
    INT x,y = 6;
    INT w = 9;
    int a = 5, b = 2;
    INT z = y;

    cout << "Testing default and copy ctor: " << endl;
    cout << "--------------------------------------- " << endl;
    cout << "If INT x,y = 6; then x = "<< x << "  and y = "
        << y <<endl;
    cout << "If INT w = 9 then w = " << w << endl;
    cout << "If INT z = y; (z is instantiated as y) z = "<< z<<endl;
    cout << "Here are the ints a = "<< a << " and b = " << b <<endl;

    cout << endl;
    cout << "Testing overloaded cast (int) operator: " << endl;
    cout << "--------------------------------------- " << endl;
    cout << "1: adding ints and INTS" << endl;
    x = y + z;
    cout << "If x = y + z, then x = "<< x << " (should be 12)" << endl;
    x = a + y;
    cout << "If x = a + y, then x = "<< x << " (should be 11)" << endl;
    x = y + b;
    cout << "If x = y + b, then x = "<< x <<" (should be 8)" <<  endl;

    cout << endl <<"2: subtracting ints and INTS" << endl;
    x = w - z;
    cout << "If x = w - z, then x = "<< x <<" (should be 3)" <<  endl;
    x = y - b;
    cout << "If x = y - b, then x = "<< x <<" (should be 4)" <<  endl;
    x = a-y;
    cout << "If x = a-y, then x = "<< x <<" (should be -1)" <<  endl;

    cout << endl <<  "3: multiplying ints and INTS" << endl;
    x = w * z;
    cout << "If x = w * z, then x = "<< x <<" (should be 54)" <<  endl;
    x = y * b;
    cout << "If x = y * b, then x = "<< x <<" (should be 12)" <<  endl;
    x = a*y;
    cout << "If x = a*y, then x = "<< x <<" (should be 30)" <<  endl;

    cout << endl <<  "4: dividing ints and INTS" << endl;
    x = w / z;
    cout << "If x = w / z, then x = "<< x <<" (should be 1)" <<  endl;
    x = y / b;
    cout << "If x = y / b, then x = "<< x <<" (should be 3)" <<  endl;
    x = (a + 7)/y;
    cout << "If x = (a + 7)/y, then x = "<< x <<" (should be 2)" << endl;
    cout << endl;

    cout << endl <<  "5: assignment" << endl;
    a = x;
    cout << "If a = x  then a = "<<a<< " (should be 2) " <<endl;
    x = 5;
    cout << "If x = 5  then x = "<<x<< " (should be 5) " <<endl;

    cout << endl <<  "6: unary +-" << endl;
    x = +a;
    cout << "If x = +a then x = "<< x << " (should be 2) " <<endl;
    x = -a;
    cout << "If x = -a then x = "<< x << " (should be -2) " <<endl;


    cout << endl;
    cout << "Testing increment/decrement operators: " << endl;
    cout << "--------------------------------------- " << endl;
    x = 5;
    cout << "Set x = 5 " << endl;
    b = x++;
    cout << "b = x++ so b = " << b << " (should be 5)" << endl
        << "\tand now x = " <<x <<" (should be 6) " << endl;

    b = ++x;
    cout << "b = ++x so b = " << b << " (should be 7)" << endl
        << "\tand now x = " << x << " ( should be 7)" << endl;

    b = --x;
    cout << "b = --x so b = " << b << " (should be 6)" << endl
        << "\tand now x = " <<x <<" (should be 6) " << endl;

    b = x--;
    cout << "b = x-- so b = " << b << " (should be 6)" << endl
        << "\tand now x = " <<x <<" (should be 5) " << endl;

    cout << endl;
    cout << "Testing combined assignment operators: " << endl;
    cout << "-------------------------------------- " << endl;
    x = 5;
    x += 6;
    cout << "If set x = 5 then x += 6 so x now equals "
        << x << " (should be 11)" << endl;
    a = 13;
    a += x + 43;
    cout << "If set a = 13 then a += x + 43 ; therefore a now equals "
        <<a << " (should be 67)" << endl;
    x = 33;
    x -= 17;
    cout << "If set x = 33 then x -= 17 so x now equals " << x << " (should be 16)" << endl;

    cout << endl;
    cout << "Testing call to functions: " << endl;
    cout << "-------------------------------------- " << endl;
    cout << "The absolute value of x is " << abs (x) << endl;

    cout << endl << "Done..." << endl;
}
