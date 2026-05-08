/*
============================================================================
Autor: Matheus da Silva Cezar
Descrição:
Programa em C que lê um número N e exibe todos os números pares a partir
de N até 1000, utilizando estrutura de repetição.

Se o número informado for ímpar, ele é ajustado para o próximo número par.

Objetivos:
- Praticar estrutura de repetição (while)
- Trabalhar com verificação de paridade
- Manipulação de sequência numérica
============================================================================
*/

#include <stdio.h>

#define LIMITE 1000

int main(void) {

    // Variável para armazenar o valor inicial
    int numero;

    // Entrada do valor inicial
    printf("Digite o valor de N: ");
    scanf("%d", &numero);

    // Se o número for ímpar, ajusta para o próximo par
    if (numero % 2 != 0) {
        numero++;
    }

    // Laço para imprimir os números pares até o limite
    while (numero <= LIMITE) {

        printf("%d\n", numero);

        // Incrementa de 2 em 2 para manter apenas pares
        numero += 2;
    }

    return 0;
}