/*
============================================================================
Autor: Matheus da Silva Cezar
Descrição:
Programa que lê uma matriz quadrada 5x5 iterativamente e calcula o somatório 
dos elementos da sua Diagonal Secundária.

Objetivos:
- Declaração de múltiplos iteradores em um único laço for.
- Compreensão de propriedades geométricas de matrizes (Álgebra Linear).
- Otimização de algoritmo (Complexidade O(N)).
============================================================================
*/

#include <stdio.h>

#define TAMANHO 5

// Protótipos das funções
void lerMatriz(int matriz[TAMANHO][TAMANHO]);
void exibirMatriz(int matriz[TAMANHO][TAMANHO]);
int somarDiagonalSecundaria(int matriz[TAMANHO][TAMANHO]);

int main(void) {
    int matriz[TAMANHO][TAMANHO];

    printf("=== SOMA DA DIAGONAL SECUNDARIA ===\n\n");

    // 1. Entrada de dados
    lerMatriz(matriz);

    // 2. Exibição para conferência
    printf("\nMatriz Digitada:\n");
    exibirMatriz(matriz);

    // 3. Processamento
    int resultado = somarDiagonalSecundaria(matriz);

    // 4. Saída de dados
    printf("\n--- RESULTADOS ---\n");
    printf("Somatorio da diagonal secundaria: %d\n", resultado);

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

int somarDiagonalSecundaria(int matriz[TAMANHO][TAMANHO]) {
    int soma = 0;

    // Otimização: i avança de cima para baixo (0 ao 4)
    // j recua da direita para a esquerda (4 ao 0)
    // Tudo isso acontecendo simultaneamente no mesmo laço!
    for (int i = 0, j = TAMANHO - 1; i < TAMANHO; i++, j--) {
        soma += matriz[i][j];
    }

    return soma;
}