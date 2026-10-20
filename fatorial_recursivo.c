#include <stdio.h>

int fatorial_recursivo(int n) {
    // Critério de parada (Base da recursão)
    if (n <= 1) {
        return 1;
    }
    // A função invoca a si mesma com argumento reduzido
    return n * fatorial_recursivo(n - 1);
}

int main() {
    printf("Fatorial Recursivo de 5: %d\n", fatorial_recursivo(5));
    return 0;
}
