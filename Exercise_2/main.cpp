#include "src/ComplexNumber.hpp"
#include <iostream>
#include <cmath>
using namespace std;
using namespace ComplexNumberLibrary;
int main()
{
    ComplexNumber z1(5.8, -2.7);
    ComplexNumber z2(4.3, 3);
    cout << z1<< endl;
    cout << z2<< endl;
    cout << z1+z2<< endl;
    cout << z1.coniugato() <<endl;
    if (z1==z2)
        cout << "z1 e z2 sono uguali" <<endl ;
    else
        cout << "z1 e z2 non sono uguali" <<endl;

    return 0;
}
