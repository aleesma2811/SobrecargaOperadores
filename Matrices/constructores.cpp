#include "constructores.h"

Matriz::Matriz(int tam)
{
    nFilas = nColumnas = tam;
    arr = new float*[tam];

    for (int i = 0; i < tam; i++) {
        arr[i] = new float[nColumnas];
    }

    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            arr[i][j] = 0;
        }
    }
}

Matriz::Matriz(int nFilas, int nColumnas) 
{
    this->nFilas = nFilas;
    this->nColumnas = nColumnas;

    arr = new float*[nFilas];

    for (int i = 0; i < nFilas; i++) {
        arr[i] = new float[nColumnas];
    }

    for (int i = 0; i < nFilas; i++) {
        for (int j = 0; j < nColumnas; j++) {
            arr[i][j] = 0;
        }
    }
}

void Matriz::insertar()
{
    for (int i = 0; i < nFilas; i++) {
        for (int j = 0; j < nColumnas; j++) {
            cout << "Ingrese el número en la posicion " << i + 1 << ", " << j + 1 << ": ";
            cin >> arr[i][j];
        }
    }
}

void Matriz::insertar(float n)
{
    for (int i = 0; i < nFilas; i++) {
        for (int j = 0; j < nColumnas; j++) {
            arr[i][j] = n;
        }
    }
}

ostream &operator<<(ostream &os, Matriz &m)
{
    for (int i = 0; i < m.nFilas; i++) {
        for (int j = 0; j < m.nColumnas; j++) {
            os << "\t" << m.arr[i][j];
        }
        cout << endl;
    }
    return os;
}
