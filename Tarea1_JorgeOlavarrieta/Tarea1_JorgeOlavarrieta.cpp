// Tarea1_JorgeOlavarrieta.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include <iostream>
#include <omp.h>
#include <cstdlib>
using namespace std;

int main() {
    const int SIZE = 1000;
    int A[SIZE], B[SIZE], C[SIZE];

    // Llenar los arreglos con valores aleatorios
    for (int i = 0; i < SIZE; i++) {
        A[i] = rand() % 100;
        B[i] = rand() % 100;
    }

    // Suma de arreglos usando OpenMP
#pragma omp parallel for
    for (int i = 0; i < SIZE; i++) {
        C[i] = A[i] + B[i];
    }

    // Imprimir algunos valores de los arreglos
    cout << "Primeros 10 elementos de los arreglos:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "A[" << i << "] = " << A[i]
            << ", B[" << i << "] = " << B[i]
            << ", C[" << i << "] = " << C[i] << endl;
    }

    return 0;
}
