#pragma once
#include <iostream>

using namespace std;

class Complejo {
    public:
        Complejo(double r, double i);
        friend ostream& operator<<(ostream& os, Complejo& a);
        friend Complejo operator+(Complejo &c1, Complejo &c2);
        friend Complejo operator-(Complejo &c1, Complejo &c2);
        friend Complejo operator*(Complejo &c1, Complejo &c2);

    private:
        double r, i;
        string tipo;
};
