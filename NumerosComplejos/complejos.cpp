#include "complejos.h"

Complejo::Complejo(double r, double i)
{
    this->r = r;
    this->i = i;
}

ostream &operator<<(ostream &os, Complejo &c)
{
    // Suma
    if (c.i > 0) {
        os << c.r << " + " << c.i << "i";
    // Resta
    } else {
        os << c.r << " - " << c.i << "i";
    }
    return os;
}

Complejo operator+(Complejo &c1, Complejo &c2)
{
    return Complejo(c1.r + c2.r, c1.i + c2.i);
}

Complejo operator-(Complejo &c1, Complejo &c2)
{

    return Complejo(c1.r - c2.r, c1.i - c2.i);
}

Complejo operator*(Complejo &c1, Complejo &c2)
{
    // double real, imag;
    // real = (c1.r * c2.r) - (c1.i * c2.i);
    // imag = (c1.r * c2.i) + (c1.i, c2.r);
    // Complejo multiplicacion = Complejo(real, imag);
    // return multiplicacion;
     
    return Complejo(((c1.r * c2.r) - (c1.i * c2.i)), ((c1.r * c2.i) + (c1.i, c2.r)));
}
