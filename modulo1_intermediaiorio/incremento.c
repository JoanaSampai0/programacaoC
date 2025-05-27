#include <stdio.h>

int main() {
    /*
    Incremento (++)
    Pré-Incremento ++
    Pós-Incremento a++
    Decremento (--)-
    Pré-Decremento --a
    Pós-Decremento a--
    */

    int numero1 = 1, resultado;

    printf("Antes incremento: %d\n", numero1);
    //numero1 = numero1 + 1;
    //numero1 += 1;
    resultado = numero1++;

    //printf("Apos incremento: %d\n", numero1);
    //numero1 = numero1 - 1;
    //numero1 -= 1;

    numero1--;
    printf("Apos Pós-incremento - Numero 1 %d - Resultado %d\n", numero1, resultado);
    
}
