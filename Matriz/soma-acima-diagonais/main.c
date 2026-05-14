/*
============================================================================
Autor: Matheus da Silva Cezar
Descrição:
Programa que lê uma matriz quadrada (configurada para 5x5, escalável para 50x50) 
e calcula a soma de todos os elementos que estão simultaneamente acima da 
diagonal principal e da diagonal secundária.

Objetivos:
- Restrição espacial em matrizes (Quadrante Superior / Triângulo Norte).
- Otimização avançada de laços for sem uso de condicionais if.
- Modularização do código.
============================================================================
*/

#include <stdio.h>

// Definido como 5 para facilitar testes. Altere para 50 para o exercício final.
#define TAMANHO 5

// Protótipos das funções
void lerMatriz(int matriz[TAMANHO][TAMANHO]);
void exibirMatriz(int matriz[TAMANHO][TAMANHO]);
int calcularSomaAcimaDiagonais(int matriz[TAMANHO][TAMANHO]);

int main(void) {
    int matriz[TAMANHO][TAMANHO];

    printf("=== SOMA ACIMA DAS DIAGONAIS (PRINCIPAL E SECUNDARIA) ===\n\n");

    // 1. Entrada de Dados
    lerMatriz(matriz);

    // 2. Exibição para conferência
    printf("\nMatriz Digitada:\n");
    exibirMatriz(matriz);

    // 3. Processamento
    int resultado = calcularSomaAcimaDiagonais(matriz);

    // 4. Saída do Resultado
    printf("\n--- RESULTADOS ---\n");
    printf("Valor da soma do quadrante superior: %d\n", resultado);

    return 0;
}

void lerMatriz(int matriz[TAMANHO][TAMANHO]) {
    printf("--- PREENCHIMENTO DA MATRIZ %dx%d ---\n", TAMANHO, TAMANHO);
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

int calcularSomaAcimaDiagonais(int matriz[TAMANHO][TAMANHO]) {
    int soma = 0;

    // Otimização: O limite 'TAMANHO / 2' evita que o laço visite linhas 
    // da metade para baixo, onde é impossível ter elementos acima das diagonais.
    for (int i = 0; i < TAMANHO / 2; i++) {
        
        // A condição 'j = i + 1' garante que está acima da diagonal principal.
        // A condição 'i + j < TAMANHO - 1' garante que está acima da diagonal secundária.
        for (int j = i + 1; i + j < TAMANHO - 1; j++) {
            soma += matriz[i][j];
        }
        
    }

    return soma;
}