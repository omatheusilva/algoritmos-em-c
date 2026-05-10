/*
============================================================================
Autor: Matheus da Silva Cezar
Descrição:
Programa que lê uma matriz 3x3 e um multiplicador inteiro. Realiza a
multiplicação de cada elemento da matriz pelo escalar informado.

Objetivos:
- Praticar a manipulação de todos os elementos de uma matriz.
- Reutilização de funções de exibição.
- Aplicação de lógica aritmética em estruturas bidimensionais.
============================================================================
*/

#include <stdio.h>

#define TAMANHO 3

// Protótipos das funções
void lerMatriz(int matriz[TAMANHO][TAMANHO]);
void exibirMatriz(int matriz[TAMANHO][TAMANHO]);
void multiplicarMatriz(int matriz[TAMANHO][TAMANHO], int escalar);

int main(void) {
    int matriz[TAMANHO][TAMANHO];
    int x;

    printf("=== MULTIPLICACAO DE MATRIZ POR ESCALAR ===\n\n");

    // 1. Entrada de dados
    lerMatriz(matriz);

    printf("\nDigite o valor do multiplicador (X): ");
    scanf("%d", &x);

    // 2. Exibição da matriz original
    printf("\nMatriz Inicial:\n");
    exibirMatriz(matriz);

    // 3. Processamento
    multiplicarMatriz(matriz, x);

    // 4. Exibição do resultado
    printf("\nMatriz Multiplicada por %d:\n", x);
    exibirMatriz(matriz);

    return 0;
}

void lerMatriz(int matriz[TAMANHO][TAMANHO]) {
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            printf("Posicao [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void exibirMatriz(int matriz[TAMANHO][TAMANHO]) {
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            // %4d garante um alinhamento visual bonito na tela
            printf("%4d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void multiplicarMatriz(int matriz[TAMANHO][TAMANHO], int escalar) {
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            matriz[i][j] *= escalar;
        }
    }
}
