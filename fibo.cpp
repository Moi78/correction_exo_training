#include "fibo.h"

int* fibo(int a, int b, unsigned int n) {
    // On alloue notre tableau
    int* array = new int[n + 2];

    // On place les deux premiers termes de la suite
    array[0] = a;
    array[1] = b;

    // On calcule la suite de fibonacci
    for(int i = 0; i < n; i++) {
        array[i + 2] = array[i] + array[i + 1];
    }

    return array;
}