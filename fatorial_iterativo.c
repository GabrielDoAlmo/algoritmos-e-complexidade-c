#include <stdio.h>

int fatorial_iterativo(int n) {
    int resultado = 1;

    // Variável de controle 'i' estruturando a repetição
    for (int i = 1; i <= n; i++) {
        resultado = resultado * i;
    }

    return resultado;
}

int main() {
    printf("Fatorial Iterativo de 5: %d\n", fatorial_iterativo(5));
    return 0;
}
