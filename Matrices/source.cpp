#include "constructores.h"

int main() {
    Matriz matriz1 = Matriz(2);
    Matriz matriz2 = Matriz(3, 5);

    cout << matriz1 << endl;
    cout << matriz2 << endl;

    matriz2.insertar(4);
    cout << matriz2 << endl;
    matriz1.insertar();


    cout << matriz1 << endl;
    cout << matriz2 << endl;

    return 0;
}