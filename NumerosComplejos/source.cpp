#include "complejos.h"

int main() {
    Complejo complejo1(2, 3);
    Complejo complejo2(1, 4);

    Complejo suma = complejo1 + complejo2;
    cout << suma << endl;
}