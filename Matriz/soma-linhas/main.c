/*
============================================================================
Autor: Matheus da Silva Cezar
Descrição:
Programa que lê uma matriz 4x4 e calcula a soma dos elementos de cada
linha separadamente.

Objetivos:
- Praticar a varredura horizontal de matrizes.
- Entender o ciclo de vida de variáveis acumuladoras em laços aninhados.
- Manter funções limpas e com responsabilidades únicas.
============================================================================
*/

#include <stdio.h>

#define TAMANHO 4

// Protótipos das funções
void lerMatriz(int matriz[TAMANHO][TAMANHO]);
void processarExibirSomaLinhas(int matriz[TAMANHO][TAMANHO]);

int main(void) {
    int matriz[TAMANHO][TAMANHO];

    printf("=== SOMA DAS LINHAS DA MATRIZ ===\n\n");

    // 1. Preenche toda a matriz primeiro
    lerMatriz(matriz);

    // 2. Processa os dados salvos e exibe os resultados
    processarExibirSomaLinhas(matriz);

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

void processarExibirSomaLinhas(int matriz[TAMANHO][TAMANHO]) {
    printf("\n--- RESULTADOS ---\n");

    // O laço de fora controla qual linha estamos analisando
    for (int i = 0; i < TAMANHO; i++) {
        int somaLinha = 0; // Zera o acumulador a cada nova linha

        // O laço de dentro passa por todas as colunas da linha atual
        for (int j = 0; j < TAMANHO; j++) {
            somaLinha += matriz[i][j];
        }

        // Exibe o total antes de ir para a próxima linha
        printf("A soma da linha %d eh: %d\n", i + 1, somaLinha);
    }
}
