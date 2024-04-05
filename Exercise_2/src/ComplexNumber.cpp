#include "ComplexNumber.hpp"
namespace ComplexNumberLibrary{

ComplexNumber::ComplexNumber(double a, double b)
{
    real = a;
    imaginary = b;
}

ComplexNumber ComplexNumber::conjugate()
{
        return ComplexNumber(real,-imaginary);
}

ostream& operator <<(ostream& os, const ComplexNumber& z)
{
    if(z.imaginary < 0)
        os << z.real << "-" << abs(z.imaginary) << "i";
    else
        os << z.real << "+" << abs(z.imaginary) << "i";
    return os;
}
ComplexNumber operator+(const ComplexNumber& z1, const ComplexNumber& z2)
{
    double sumReal = z1.real + z2.real;
    double sumImaginary = z1.imaginary + z2.imaginary;
    ComplexNumber sum(sumReal, sumImaginary);
    return sum;
}
bool operator==(const ComplexNumber& z1, const ComplexNumber& z2)
{
    double diffReal = abs(z1.real - z2.real);
    double diffImag = abs(z1.imaginary - z2.imaginary);
    double toll = 2.2e-16;
    if (diffReal < toll && diffImag < toll)
        return true;
    else
        return false;
}
}
