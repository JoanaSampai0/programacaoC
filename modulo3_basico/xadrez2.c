#include <stdio.h>

int main() {
    // Número de casas que cada peça irá se mover
    int movimentoTorre = 5;
    int movimentoBispo = 5;
    int movimentoRainha = 8;

    int i;

    // Movimento Torre
    printf("Movimento da Torre (5 casas para a direita):\n");

    for (i = 0; i < movimentoTorre; i++) {
        printf("direita\n");
    }

    printf("\n");

    // Movimento Bispo
    printf("Movimento do Bispo (5 casas na diagonal para cima e direita):\n");

    i = 0;
    while (i < movimentoBispo) {
        printf("cima, direita\n");
        i++;
    }

    printf("\n");

    // Movimento Rainha
    printf("Movimento da Rainha (8 casas para a esquerda):\n");

    i = 0;
    do {
        printf("esquerda\n");
        i++;
    } while (i < movimentoRainha);

    return 0;
}

