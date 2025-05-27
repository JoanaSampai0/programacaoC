#include <stdint.h>

int main (){
    /*
    Atribuição simples (=)
    Atribuição com soma (+=)
    Atricuição com subtração (-=)
    Atribuição com multiplicação (*=)
    Atibuição com divisão (/=)
    */

    int numero1 = 10, numero2, resultado;

    resultado = 10;
    printf("Resultado: %d\n", resultado);

    resultado +=  20;
    printf("Resultado: %d\n", resultado);

    resultado -= numero1;
    printf("Resultado: %d\n", resultado);

    resultado *= 5;
    printf("Resultado: %d\n", resultado);

    resultado /= 2;
    printf("Resultado: %d\n", resultado);


}