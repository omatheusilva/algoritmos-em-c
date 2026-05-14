/*
============================================================================
Autor: Matheus da Silva Cezar
Descrição:
Programa que lê uma matriz quadrada 5x5 iterativamente e calcula o somatório
dos elementos acima da diagonal principal (Triângulo Superior).

Objetivos:
- Leitura interativa de matrizes bidimensionais.
- Manipulação avançada de índices em laços aninhados.
- Compreensão de propriedades geométricas de matrizes (Álgebra Linear).
- Otimização de laços (evitando varreduras desnecessárias).
============================================================================
*/

#include <stdio.h>

#define TAMANHO 5

// Protótipos das funções
void lerMatriz(int matriz[TAMANHO][TAMANHO]);
void exibirMatriz(int matriz[TAMANHO][TAMANHO]);
int somarTrianguloSuperior(int matriz[TAMANHO][TAMANHO]);

int main(void) {
    int matriz[TAMANHO][TAMANHO];

    printf("=== SOMA DO TRIANGULO SUPERIOR ===\n\n");

    // 1. O usuário preenche a matriz
    lerMatriz(matriz);

    // 2. Exibe a matriz para conferência visual
    printf("\nMatriz Digitada:\n");
    exibirMatriz(matriz);

    // 3. Calcula o somatório usando a lógica otimizada
    int resultado = somarTrianguloSuperior(matriz);

    // 4. Exibe o resultado
    printf("\nSomatorio do triangulo superior: %d\n", resultado);

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

int somarTrianguloSuperior(int matriz[TAMANHO][TAMANHO]) {
    int soma = 0;

    // i vai de 0 até a penúltima linha (a última linha não tem triângulo superior)
    for (int i = 0; i < TAMANHO - 1; i++) {

        // j SEMPRE começa uma casa à direita da diagonal principal (i + 1)
        for (int j = i + 1; j < TAMANHO; j++) {