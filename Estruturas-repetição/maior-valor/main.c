/*
============================================================================
Autor: Matheus da Silva Cezar
Descrição:
Programa em C que lê diversos valores inteiros informados pelo usuário e
exibe o maior valor digitado. A leitura é encerrada quando o usuário
informa -1.

Objetivos:
- Praticar estrutura de repetição (while)
- Trabalhar com valor sentinela (-1)
- Identificar o maior valor em uma sequência
============================================================================
*/

#include <stdio.h>

int main(void) {

    // Variável para armazenar o valor digitado
    int valor;

    // Variável que guarda o maior valor encontrado
    int maior;

    // Inicializa maior com um valor baixo (primeiro valor será referência)
    maior = -1;

    printf("Digite valores inteiros (-1 para encerrar):\n");

    // Leitura do primeiro valor
    printf("Digite um valor: ");
    scanf("%d", &valor);

    // Enquanto o valor não for -1, continua lendo
    while (valor != -1) {

        // Verifica se o valor atual é maior que o maior registrado
        if (valor > maior) {
            maior = valor;
        }

        // Lê o próximo valor
        printf("Digite um valor: ");
        scanf("%d", &valor);
    }

    // Exibe o maior valor encontrado
    printf("Maior valor digitado: %d\n", maior);

    return 0;
}