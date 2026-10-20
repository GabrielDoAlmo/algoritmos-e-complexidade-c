#include <stdio.h>

int fatorial_monolitico(int n) {
    int resultado = 1;
    int i = 1;

// Rótulo para o início do laço manual
inicio_laco:

    // Teste condicional de saída
    if (i > n) {
        goto fim_laco; // Desvio incondicional para fora
    }

    resultado = resultado * i;
    i++;

    goto inicio_laco; // Desvio incondicional voltando para o início

// Rótulo para o final do fluxo
fim_laco:
    return resultado;
}

int main() {
    printf("Fatorial Monolitico de 5: %d\n", fatorial_monolitico(5));
    return 0;
}
