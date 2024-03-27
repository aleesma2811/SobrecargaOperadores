#pragma once
#include <iostream>

using namespace std;

class Matriz 
{
    private:
        int nFilas;
        int nColumnas;
        float **arr;
    public:
        Matriz(int tam);
        Matriz(int fila, int col);

        friend ostream& operator<<(ostream& os, Matriz& m);
        void insertar();
        void insertar(float n);
};