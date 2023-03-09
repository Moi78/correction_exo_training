#include <iostream>

#include "triangle.h"
#include "fibo.h"

int main() {
    triangle(4);

    int* fiboSuite = fibo(1, 1, 10); // On calcule les n + 2 (ici 12) premiers termes de la suite
    for(int i = 0; i < 12; i++) {
        std::cout << fiboSuite[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
