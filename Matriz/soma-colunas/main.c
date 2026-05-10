/*
============================================================================
Autor: Matheus da Silva Cezar
Descrição:
Programa que lê uma matriz 5x5, exibe-a na tela e calcula a soma dos 
elementos de cada coluna separadamente.

Objetivos:
- Praticar a varredura vertical de matrizes (Column-major).
- Manipulação de índices invertidos.
- Separação em funções para entrada, exibição e processamento.
============================================================================
*/

#include <stdio.h>

#define TAMANHO 5

// Protótipos das funções
void lerMatriz(int matriz[TAMANHO][TAMANHO]);
void exibirMatriz(int matriz[TAMANHO][TAMANHO]);
void processarExibirSomaColunas(int matriz[TAMANHO][TAMANHO]);

int main(void) {
    int matriz[TAMANHO][TAMANHO];

    printf("=== SOMA DAS COLUNAS DA MATRIZ ===\n\n");

    // 1. Preenchimento
    lerMatriz(matriz);

    // 2. Exibição da Matriz Completa
    printf("\nMatriz Digitada:\n");
    exibirMatriz(matriz);

    // 3. Processamento e Saída das Colunas
    processarExibirSomaColunas(matriz);

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

void processarExibirSomaColunas(int matriz[TAMANHO][TAMANHO]) {
    printf("\n--- RESULTADOS DAS COLUNAS ---\n");
    
    // O laço externo agora trava na COLUNA
    for (int col = 0; col < TAMANHO; col++) {
        int somaColuna = 0; 
        
        // O laço interno percorre todas as LINHAS daquela coluna
        for (int lin = 0; lin < TAMANHO; lin++) {
            somaColuna += matriz[lin][col];
        }
        
        printf("A soma da coluna %d eh: %d\n", col + 1, somaColuna);
    }
}