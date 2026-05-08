/*
============================================================================
Autor: Matheus da Silva Cezar
Descrição:
Programa em C que lê um número inteiro e exibe a tabuada desse número
de 1 até 10 utilizando estrutura de repetição (while).

Objetivos:
- Praticar estrutura de repetição while
- Trabalhar com multiplicação
- Entrada e saída de dados
============================================================================
*/

#include <stdio.h>

int main(void) {

    // Variável para armazenar o número informado pelo usuário
    int numero;

    // Variável de controle do loop (contador da tabuada)
    int i = 1;

    // Entrada do número
    printf("Digite o valor de N: ");
    scanf("%d", &numero);

    // Laço de repetição para gerar a tabuada de 1 a 10
    while (i <= 10) {

        // Exibe o cálculo da tabuada
        printf("%d x %d = %d\n", numero, i, numero * i);

        // Incrementa o contador
        i++;
    }

    return 0;
}
