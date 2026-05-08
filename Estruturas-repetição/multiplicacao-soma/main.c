/*
============================================================================
Autor: Matheus da Silva Cezar
Descrição:
Programa em C que lê dois números inteiros positivos e realiza a
multiplicação entre eles sem utilizar o operador '*', utilizando apenas
soma repetida.

Objetivos:
- Praticar estrutura de repetição (while)
- Simular multiplicação com soma sucessiva
- Trabalhar lógica matemática básica
============================================================================
*/

#include <stdio.h>

int main(void) {

    // Variáveis para os dois valores e resultado
    int valor1, valor2;
    int resultado = 0;

    // Entrada do primeiro valor
    printf("Digite o valor 1: ");
    scanf("%d", &valor1);

    // Entrada do segundo valor
    printf("Digite o valor 2: ");
    scanf("%d", &valor2);

    // Laço para somar valor1 repetidamente valor2 vezes
    while (valor2 > 0) {

        // Soma sucessiva (equivale à multiplicação)
        resultado += valor1;

        // Decrementa o contador
        valor2--;
    }

    // Exibe o resultado final
    printf("Resultado: %d\n", resultado);

    return 0;
}
