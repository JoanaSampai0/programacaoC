#include <stdio.h>  

int main() {
    //Declarar variaveis Produto, u i estoque, double valor unitário, bouble valor total
    // u i quantidade minima

    char produtoA[30] = "Produto A";
    char produtoB[30] = "Produto B";

    unsigned int estoqueA = 1000;
    unsigned int estoqueB = 2000;

    float valorA = 10.50;
    float valorB = 20.40;

    unsigned int quantidadeMinimoA = 500;
    unsigned int quantidadeMinimoB = 2500;

    double valorTotalA;
    double valorTotalB;

    int resultadoA, resultadoB;

    // Exibir informações dos produtos
    printf("Produto %s tem estoque %u e o valor unitário é R$ %.2f\n, produtoA, estoqueA, valorA");
    printf("Produto %s tem estoque %u e o valor unitário é R$ %.2f\n, produtoB, estoqueB, valorB");

    //Comparação com valor minímo de estoque
    resultadoA = estoqueA > estoqueMinimoA;
    resultadoB = estoqueB > estoqueMinimoB;

    printf ("O produto %s tem estoque mínimo %d\n", produtoA, resultadoA);
    printf ("O produto %s tem estoque mínimo %d\n", produtoB, resultadoB);

    //Comparação entre os valores totais dos produtos

    printf ("Valor total de A (R$ %.2f) é maior que o valor total de B (%.2f)? : %d\n", 
                               estoqueA * valorA,
                               estoqueB * valorB,
                               (estoqueA * valorA) > (estoqueB * valorB));











}

