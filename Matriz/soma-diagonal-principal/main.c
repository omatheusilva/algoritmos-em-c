/*
============================================================================
Autor: Matheus da Silva Cezar
Descrição:
Programa que lê uma matriz quadrada 5x5 iterativamente e calcula o somatório
dos elementos da sua Diagonal Principal.

Objetivos:
- Leitura interativa e exibição de matrizes bidimensionais.
- Compreensão de propriedades geométricas de matrizes (Álgebra Linear).
- Otimização extrema de algoritmo (Complexidade O(N) em vez de O(N²)).
============================================================================
*/

#include <stdio.h>

#define TAMANHO 5

// Protótipos das funções
void lerMatriz(int matriz[TAMANHO][TAMANHO]);
void exibirMatriz(int matriz[TAMANHO][TAMANHO]);
int somarDiagonalPrincipal(int matriz[TAMANHO][TAMANHO]);

int main(void) {
    int matriz[TAMANHO][TAMANHO];

    printf("=== SOMA DA DIAGONAL PRINCIPAL ===\n\n");

    // 1. Entrada de dados
    lerMatriz(matriz);

    // 2. Exibição para conferência
    printf("\nMatriz Digitada:\n");
    exibirMatriz(matriz);

    // 3. Processamento otimizado
    int resultado = somarDiagonalPrincipal(matriz);

    // 4. Saída de dados
    printf("\n--- RESULTADOS ---\n");
    printf("Somatorio da diagonal principal: %d\n", resultado);

    return 0;
}

void lerMatriz(int matriz[TAMANHO][TAMANHO]) {
    printf("--- PREENCHIMENTO DA MATRIZ %dx%d ---\n", TAMANHO, TAMANHO);
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            printf("Digite o numero da posicao [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void exibirMatriz(int matriz[TAMANHO][TAMANHO]) {
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int somarDiagonalPrincipal(int matriz[TAMANHO][TAMANHO]) {
    int soma = 0;

    // Otimização: A diagonal principal possui linha e coluna iguais (i == j).
    // Usamos um único laço, acessando matriz[i][i], reduzindo o processamento de 25 para 5 repetições.
    for (int i = 0; i < TAMANHO; i++) {
        soma += matriz[i][i];
    }

    return soma;
}
