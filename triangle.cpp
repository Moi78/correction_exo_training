#include "triangle.h"

void triangle(unsigned int n) {
    // On itere autant de fois qu'il y a de lignes
    for(int i = 1; i <= n; i++) {
        // On place n - i espaces
        for(int j = 0; j < n - i; j++) {
            std::cout << " ";
        }

        // On ajoute 2i - 1 X
        for(int k = 0; k < (2 * i - 1); k++) {
            std::cout << "X";
        }

        std::cout << std::endl;
    }
}