#ifndef __COMPLEXNUMBER_HPP
#define __COMPLEXNUMBER_HPP

#include<iostream>
#include<cmath>
using namespace std;

namespace ComplexNumberLibrary{
struct ComplexNumber
{
    double R;
    double I;


    ComplexNumber(double a, double b);

    ComplexNumber()=default;
    ComplexNumber coniugato();
};
ostream& operator <<(ostream& os, const ComplexNumber& z);

ComplexNumber operator+(const ComplexNumber& z1,const ComplexNumber& z2);

bool operator==(const ComplexNumber& z1,const ComplexNumber& z2);

}
#endif
