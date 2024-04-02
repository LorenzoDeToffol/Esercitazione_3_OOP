#include "ComplexNumber.hpp"

namespace ComplexNumberLibrary{

ComplexNumber::ComplexNumber(double reale, double immaginario)
{
    R=reale;
    I=immaginario;
}
ComplexNumber ComplexNumber::coniugato()
{
    return ComplexNumber(R,-I);
}
ostream& operator <<(ostream& os, const ComplexNumber& z)
{
    if(z.I < 0)
        os << z.R << " - " << abs(z.I)<<"i";
    else
        os << z.R << " + "<< z.I<<"i";
    return os;
}
ComplexNumber operator+(const ComplexNumber& z1,const ComplexNumber& z2)
{
    double reale = z1.R+z2.R;
    double immaginaria = z1.I+z2.I;
    ComplexNumber z(reale, immaginaria);
    return z;
}
bool operator==(const ComplexNumber& z1,const ComplexNumber& z2)
{
    double distanzaReale = abs(z1.R-z2.R);
    double distanzaImmaginaria = abs(z1.I-z2.I);
    double toll = 2.2e-12;
    if(distanzaReale < toll && distanzaImmaginaria < toll)
        return true;
    else
        return false;
}
}
