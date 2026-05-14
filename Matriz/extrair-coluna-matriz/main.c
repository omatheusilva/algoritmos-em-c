/*
============================================================================
Autor: Matheus da Silva Cezar
Descrição:
Programa que lê uma matriz 3x5 e armazena uma coluna específica (escolhida
pelo usuário) em um vetor unidimensional de 3 elementos.

Objetivos:
- Transição de dados entre estruturas bidimensionais e unidimensionais.
- Validação de entrada de dados para prevenção de Segmentation Fault.
- Modularização e passagem de matrizes não-quadradas por parâmetro.
============================================================================
*/

#include <stdio.h>

#define LINHAS 3
#define COLUNAS 5

// Protótipos das funções
void lerMatriz(int matriz[LINHAS][COLUNAS]);
void exibirMatriz(int matriz[LINHAS][COLUNAS]);
void extrairColuna(int matriz[LINHAS][COLUNAS], int vetor[LINHAS], int colunaAlvo);
void exibirVetor(int vetor[LINHAS], int colunaAlvo);

int main(void) {
    int matriz[LINHAS][COLUNAS];
    int vetorExtraido[LINHAS];
    int colunaDesejada;

    printf("=== EXTRACAO DE COLUNA PARA VETOR ===\n\n");

    // 1. Entrada de dados
    lerMatriz(matriz);

    // 2. Exibição da Matriz Original
    printf("\n--- Matriz Original (%dx%d) ---\n", LINHAS, COLUNAS);
    exibirMatriz(matriz);

    // 3. Escolha da coluna com validação de segurança
    printf("\n");
    do {
        printf("Digite o indice da coluna que deseja extrair (0 a %d): ", COLUNAS - 1);
        scanf("%d", &colunaDesejada);

        if (colunaDesejada < 0 || colunaDesejada >= COLUNAS) {
            printf("[ERRO] Indice invalido! A matriz so possui colunas de 0 a %d.\n", COLUNAS - 1);
        }
    } while (colunaDesejada < 0 || colunaDesejada >= COLUNAS);

    // 4. Processamento
    extrairColuna(matriz, vetorExtraido, colunaDesejada);

    // 5. Exibição do Vetor Resultante
    exibirVetor(vetorExtraido, colunaDesejada);

    return 0;
}

void lerMatriz(int matriz[LINHAS][COLUNAS]) {
    printf("--- PREENCHIMENTO DA MATRIZ ---\n");
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("Digite o valor da posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void exibirMatriz(int matriz[LINHAS][COLUNAS]) {
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void extrairColuna(int matriz[LINHAS][COLUNAS], int vetor[LINHAS], int colunaAlvo) {
    // Percorre as linhas da matriz, mas mantém a coluna fixa na escolhida pelo usuário
    for (int i = 0; i < LINHAS; i++) {
        vetor[i] = matriz[i][colunaAlvo];
    }
}

void exibirVetor(int vetor[LINHAS], int colunaAlvo) {
    printf("\n--- Vetor Extraido (Coluna %d) ---\n", colunaAlvo);
    for (int i = 0; i < LINHAS; i++) {
        printf("[%d] -> %d\n", i, vetor[i]);
    }
}
