/*
============================================================================
Autor: Matheus da Silva Cezar
Descrição:
Programa que lê duas matrizes quadradas (A e B) de ordem 4 e calcula a
matriz resultante (R) da multiplicação entre elas.

Objetivos:
- Multiplicação matricial (Produto Escalar de Linhas por Colunas).
- Manipulação de laços triplos aninhados (Complexidade O(N³)).
- Reutilização de funções genéricas de entrada/saída.
============================================================================
*/

#include <stdio.h>

#define TAMANHO 4

// Protótipos das funções
void lerMatriz(char nome, int matriz[TAMANHO][TAMANHO]);
void exibirMatriz(int matriz[TAMANHO][TAMANHO]);
void multiplicarMatrizes(int matrizA[TAMANHO][TAMANHO], int matrizB[TAMANHO][TAMANHO], int matrizR[TAMANHO][TAMANHO]);

int main(void) {
    int matrizA[TAMANHO][TAMANHO];
    int matrizB[TAMANHO][TAMANHO];
    int matrizR[TAMANHO][TAMANHO];

    printf("=== MULTIPLICACAO DE MATRIZES %dx%d ===\n\n", TAMANHO, TAMANHO);

    // 1. Leitura das Matrizes A e B
    lerMatriz('A', matrizA);
    printf("\n");
    lerMatriz('B', matrizB);

    // 2. Processamento (Multiplicação)
    multiplicarMatrizes(matrizA, matrizB, matrizR);

    // 3. Exibição dos Resultados
    printf("\n--- Matriz Resultante (A * B) ---\n");
    exibirMatriz(matrizR);

    return 0;
}

void lerMatriz(char nome, int matriz[TAMANHO][TAMANHO]) {
    printf("--- PREENCHIMENTO DA MATRIZ %c ---\n", nome);
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            printf("Digite o valor da posicao %c[%d][%d]: ", nome, i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void exibirMatriz(int matriz[TAMANHO][TAMANHO]) {
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            printf("%4d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void multiplicarMatrizes(int matrizA[TAMANHO][TAMANHO], int matrizB[TAMANHO][TAMANHO], int matrizR[TAMANHO][TAMANHO]) {
    // Algoritmo clássico de multiplicação matricial O(N³)
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {

            // É fundamental zerar a posição da matriz resultante antes de somar os produtos
            matrizR[i][j] = 0;

            // O laço 'k' percorre a coluna de A e a linha de B simultaneamente
            for (int k = 0; k < TAMANHO; k++) {
                matrizR[i][j] += matrizA[i][k] * matrizB[k][j];
            }

        }
    }
}
