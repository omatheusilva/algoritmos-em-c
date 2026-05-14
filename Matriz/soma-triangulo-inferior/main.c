/*
============================================================================
Autor: Matheus da Silva Cezar
Descrição:
Programa que lê uma matriz quadrada 5x5 iterativamente e calcula o somatório
dos elementos abaixo da diagonal principal (Triângulo Inferior).

Objetivos:
- Leitura interativa de matrizes bidimensionais.
- Manipulação avançada de índices em laços aninhados.
- Compreensão de propriedades geométricas de matrizes (Álgebra Linear).
============================================================================
*/

#include <stdio.h>

#define TAMANHO 5

// Protótipos das funções
void lerMatriz(int matriz[TAMANHO][TAMANHO]);
void exibirMatriz(int matriz[TAMANHO][TAMANHO]);
int somarTrianguloInferior(int matriz[TAMANHO][TAMANHO], int *passadas);

int main(void) {
    int matriz[TAMANHO][TAMANHO];

    printf("=== SOMA DO TRIANGULO INFERIOR ===\n\n");

    // 1. O usuário preenche a matriz
    lerMatriz(matriz);

    // 2. Exibe a matriz para conferência visual
    printf("\nMatriz Digitada:\n");
    exibirMatriz(matriz);

    // 3. Calcula o somatório (passando a variável passadas por referência)
    int resultado = somarTrianguloInferior(matriz);

    // 4. Exibe o resultado e a contagem de laços
    printf("\n--- RESULTADOS ---\n");
    printf("Somatorio do triangulo inferior: %d\n", resultado);

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

int somarTrianguloInferior(int matriz[TAMANHO][TAMANHO]) {
    int soma = 0;
     // Zera o contador usando o ponteiro

    // Otimização: A linha 0 nunca tem elementos abaixo da diagonal, então i começa em 1
    for (int i = 1; i < TAMANHO; i++) {

        // j começa no zero e vai até ANTES de cruzar a diagonal principal (j < i)
        for (int j = 0; j < i; j++) {
            soma += matriz[i][j];
        }
    }
    return soma;
}
