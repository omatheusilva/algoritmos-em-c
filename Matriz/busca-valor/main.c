/*
============================================================================
Autor: Matheus da Silva Cezar
Descrição:
Programa que lê uma matriz 4x4 e um número alvo. Realiza uma busca linear
na estrutura para verificar se o número existe e informa sua coordenada.

Objetivos:
- Praticar algoritmos de Busca Linear em arrays bidimensionais.
- Aplicação do conceito de "Early Return" para otimização de laços.
- Modularização de rotinas de entrada e processamento.
============================================================================
*/

#include <stdio.h>

#define TAMANHO 4

// Protótipos das funções
void lerMatriz(int matriz[TAMANHO][TAMANHO]);
void buscarValor(int matriz[TAMANHO][TAMANHO], int alvo);

int main(void) {
    int matriz[TAMANHO][TAMANHO];
    int numeroBuscado;

    printf("=== SISTEMA DE BUSCA NA MATRIZ ===\n\n");

    // 1. Preenchimento da matriz
    lerMatriz(matriz);

    // 2. Captura do valor alvo
    printf("\nDigite o valor que deseja buscar: ");
    scanf("%d", &numeroBuscado);

    // 3. Processamento da busca
    buscarValor(matriz, numeroBuscado);

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

void buscarValor(int matriz[TAMANHO][TAMANHO], int alvo) {
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            
            // Se encontrar o número, imprime e aborta a função imediatamente
            if (matriz[i][j] == alvo) {
                printf("\n[SUCESSO] Encontrei o numero %d na posicao [%d][%d]!\n", alvo, i + 1, j + 1);
                return; // O return encerra a função, quebrando os dois laços na hora
            }
            
        }
    }
    
    // Se a função não foi abortada pelo return acima, significa que varreu tudo e não achou
    printf("\n[FALHA] O numero %d nao foi encontrado na matriz.\n", alvo);
}