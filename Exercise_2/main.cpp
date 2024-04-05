#include <iostream>
#include <cmath>
#include "src/ComplexNumber.hpp"
using namespace std;
using namespace ComplexNumberLibrary;

int main()
{
    ComplexNumber z1(1.2, -2.4);
    ComplexNumber z2(0.6, 1.2);

    cout << z1 << endl;
    cout << z2 << endl;
    cout << "Conjugate:" <<  z1.conjugate() << endl;
    cout << "Sum:" <<  z1+z2 << endl;

    if(z1 == z2)
        cout << "Sono uguali" << endl;
    else
        cout << "Non sono uguali" << endl;
    return 0;
}
