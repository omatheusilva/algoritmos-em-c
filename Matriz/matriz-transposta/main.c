/*
============================================================================
Autor: Matheus da Silva Cezar
Descrição:
Programa em C que lê uma matriz A de tamanho 2x3, gera a sua matriz
transposta B (tamanho 3x2) e imprime ambas na tela para comparação.

Objetivos:
- Aplicar conceitos de Álgebra Linear (Matriz Transposta) na programação.
- Trabalhar com matrizes retangulares (dimensões diferentes para linhas e colunas).
- Passagem de matrizes multidimensionais como parâmetro de função.
============================================================================
*/

#include <stdio.h>

// Definição das dimensões da Matriz Original (A)
#define LINHAS_A 2
#define COLUNAS_A 3

/*
============================================================================
Função: gerarTransposta
Descrição:
Recebe a matriz original 2x3 e preenche a matriz destino 3x2 invertendo
os índices de linha e coluna.
============================================================================
*/
void gerarTransposta(int original[LINHAS_A][COLUNAS_A], int transposta[COLUNAS_A][LINHAS_A]) {
    for (int i = 0; i < LINHAS_A; i++) {
        for (int j = 0; j < COLUNAS_A; j++) {
            // O pulo do gato: invertemos a posição de 'i' e 'j'
            transposta[j][i] = original[i][j];
        }
    }
}

/*
============================================================================
Funções de Impressão
Descrição: Exibem as matrizes de forma formatada (em grade).
============================================================================
*/
void imprimirMatrizOriginal(int matriz[LINHAS_A][COLUNAS_A]) {
    printf("\n--- Matriz A (Original 2x3) ---\n");
    for (int i = 0; i < LINHAS_A; i++) {
        for (int j = 0; j < COLUNAS_A; j++) {
            printf("%3d ", matriz[i][j]); // O "%3d" alinha os números na tela
        }
        printf("\n");
    }
}

void imprimirMatrizTransposta(int matriz[COLUNAS_A][LINHAS_A]) {
    printf("\n--- Matriz B (Transposta 3x2) ---\n");
    for (int i = 0; i < COLUNAS_A; i++) {
        for (int j = 0; j < LINHAS_A; j++) {
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }
}

/*
============================================================================
Função principal
============================================================================
*/
int main(void) {
    int matrizA[LINHAS_A][COLUNAS_A];
    int matrizB[COLUNAS_A][LINHAS_A];

    printf("=== O ESPELHO: MATRIZ TRANSPOSTA ===\n\n");

    // 1. Leitura dos elementos da matriz original
    printf("Digite os %d valores para preencher a matriz A (%dx%d):\n", LINHAS_A * COLUNAS_A, LINHAS_A, COLUNAS_A);
    for (int i = 0; i < LINHAS_A; i++) {
        for (int j = 0; j < COLUNAS_A; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matrizA[i][j]);
        }
    }

    // 2. Processamento: Gerar a transposta
    gerarTransposta(matrizA, matrizB);

    // 3. Exibição dos resultados
    imprimirMatrizOriginal(matrizA);
    imprimirMatrizTransposta(matrizB);

    return 0;
}
