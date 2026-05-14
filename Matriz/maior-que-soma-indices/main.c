/*
============================================================================
Autor: Matheus da Silva Cezar
Descrição:
Programa que lê uma matriz 5x5 e encontra todos os elementos cujo valor
armazenado seja estritamente maior que a soma de seus respectivos índices
(matriz[i][j] > i + j).

Objetivos:
- Separação de responsabilidades (Leitura vs Processamento).
- Varredura completa de matrizes bidimensionais.
- Acesso e manipulação de índices de controle em linguagem C.
============================================================================
*/

#include <stdio.h>

#define TAMANHO 5

// Protótipos das funções
void lerMatriz(int matriz[TAMANHO][TAMANHO]);
void exibirMatriz(int matriz[TAMANHO][TAMANHO]);
void verificarSomaIndices(int matriz[TAMANHO][TAMANHO]);

int main(void) {
    int matriz[TAMANHO][TAMANHO];

    printf("=== VALOR MAIOR QUE A SOMA DOS INDICES ===\n\n");

    // 1. Entrada de Dados
    lerMatriz(matriz);

    // 2. Exibição para conferência
    printf("\nMatriz Digitada:\n");
    exibirMatriz(matriz);

    // 3. Processamento e Saída
    verificarSomaIndices(matriz);

    return 0;
}

void lerMatriz(int matriz[TAMANHO][TAMANHO]) {
    printf("--- PREENCHIMENTO DA MATRIZ %dx%d ---\n", TAMANHO, TAMANHO);
    // Neste caso específico, manteremos os índices exibidos começando em 0
    // para que a matemática de (i + j) fique clara para o usuário final.
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            printf("Digite o valor da posicao [%d][%d]: ", i, j);
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

void verificarSomaIndices(int matriz[TAMANHO][TAMANHO]) {
    int encontrou = 0; // Flag para saber se achamos pelo menos um

    printf("\n--- ELEMENTOS MAIORES QUE A SOMA DOS INDICES ---\n");

    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {

            // Regra de negócio exigida pelo problema
            if (matriz[i][j] > (i + j)) {
                printf("matriz[%d][%d] = %2d  ->  (%d > %d)\n", i, j, matriz[i][j], matriz[i][j], i + j);
                encontrou = 1;
            }

        }
    }

    // Se a flag continuar em 0, significa que o laço não encontrou ninguém
    if (encontrou == 0) {
        printf("Nenhum elemento digitado e maior que a soma de seus indices.\n");
    }
}
