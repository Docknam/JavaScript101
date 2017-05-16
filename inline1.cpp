//inline.cpp -- Using an inline Function
#include <iostream>
using namespace std;

// An inline function definition
inline double square(double x)
{
    return x * x;
}

int main()
{
    double a;
    double b;
    double c = 15.0;

    a = square(6.0);
    b = square(7.7 + 11.5);

    cout << "a = " << a << ", b = " << b << endl;
}