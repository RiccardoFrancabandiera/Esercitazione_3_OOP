#ifndef __COMPLEXNUMBER_HPP
#define __COMPLEXNUMBER_HPP

#include <iostream>
#include <cmath>
using namespace std;

namespace ComplexNumberLibrary
{
    struct ComplexNumber
    {
        double real;
        double imaginary;
        ComplexNumber(double a, double b);

        ComplexNumber();
        ComplexNumber conjugate();
    };
    ostream& operator <<(ostream& os, const ComplexNumber& z);

    ComplexNumber operator+(const ComplexNumber& z1, const ComplexNumber& z2);

    bool operator==(const ComplexNumber& z1, const ComplexNumber& z2);

}
#endif
