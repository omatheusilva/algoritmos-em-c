/*
============================================================================
Autor: Matheus da Silva Cezar
Descrição:
Programa que lê uma matriz 5x5 iterativamente e calcula a soma total dos
elementos presentes em ambas as diagonais (Principal e Secundária).

Objetivos:
- Leitura interativa e exibição de matrizes bidimensionais.
- Otimização de laços (Complexidade O(N)).
- Tratamento de interseção espacial (evitar contagem dupla do centro).
- Lógica parametrizada e escalável para qualquer tamanho de matriz.
============================================================================
*/

#include <stdio.h>

#define TAMANHO 5

// Protótipos das funções
void lerMatriz(int matriz[TAMANHO][TAMANHO]);
void exibirMatriz(int matriz[TAMANHO][TAMANHO]);
int somarAmbasDiagonais(int matriz[TAMANHO][TAMANHO]);

int main(void) {
    int matriz[TAMANHO][TAMANHO];

    printf("=== SOMA DAS DUAS DIAGONAIS ===\n\n");

    // 1. Entrada de dados
    lerMatriz(matriz);

    // 2. Exibição da Matriz Completa
    printf("\nMatriz Digitada:\n");
    exibirMatriz(matriz);

    // 3. Processamento
    int resultado = somarAmbasDiagonais(matriz);

    // 4. Saída do resultado
    printf("\n--- RESULTADOS ---\n");
    printf("Soma das duas diagonais (sem repeticao do centro): %d\n", resultado);

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

int somarAmbasDiagonais(int matriz[TAMANHO][TAMANHO]) {
    int soma = 0;

    for (int i = 0; i < TAMANHO; i++) {
        // 1. Soma o elemento da diagonal principal
        soma += matriz[i][i];

        // 2. Calcula qual seria a coluna da diagonal secundária nesta linha
        int j = (TAMANHO - 1) - i;

        // 3. Se não for o ponto de cruzamento (centro), soma a secundária também
        if (i != j) {
            soma += matriz[i][j];
        }
    }

    return soma;
}
