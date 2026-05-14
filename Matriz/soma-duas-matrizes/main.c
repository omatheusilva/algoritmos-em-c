/*
============================================================================
Autor: Matheus da Silva Cezar
Descrição:
Programa que lê duas matrizes quadradas (A e B), realiza a soma algébrica
entre elas e armazena o resultado em uma terceira matriz (Soma).

Objetivos:
- Reutilização de código através de funções com parâmetros.
- Separação de responsabilidades (Leitura, Processamento, Exibição).
- Operação de soma matricial elemento a elemento (Álgebra Linear).
============================================================================
*/

#include <stdio.h>

// Definido como 3 para facilitar testes de mesa.
// Mude para 10 para atender estritamente ao enunciado final.
#define TAMANHO 3

// Protótipos das funções
void lerMatriz(char nome, int matriz[TAMANHO][TAMANHO]);
void somarMatrizes(int matrizA[TAMANHO][TAMANHO], int matrizB[TAMANHO][TAMANHO], int matrizSoma[TAMANHO][TAMANHO]);
void exibirResultadoOperacao(int matrizA[TAMANHO][TAMANHO], int matrizB[TAMANHO][TAMANHO], int matrizSoma[TAMANHO][TAMANHO]);

int main(void) {
    int matrizA[TAMANHO][TAMANHO];
    int matrizB[TAMANHO][TAMANHO];
    int matrizSoma[TAMANHO][TAMANHO];

    printf("=== SOMA DE MATRIZES %dx%d ===\n\n", TAMANHO, TAMANHO);

    // 1. Leitura das Matrizes (Reaproveitando a mesma função!)
    lerMatriz('A', matrizA);
    printf("\n");
    lerMatriz('B', matrizB);

    // 2. Processamento da Soma
    somarMatrizes(matrizA, matrizB, matrizSoma);

    // 3. Exibição do Resultado
    exibirResultadoOperacao(matrizA, matrizB, matrizSoma);

    return 0;
}

// O parâmetro 'nome' deixa a função dinâmica, servindo para qualquer matriz
void lerMatriz(char nome, int matriz[TAMANHO][TAMANHO]) {
    printf("--- PREENCHIMENTO DA MATRIZ %c ---\n", nome);
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            printf("Digite o valor da posicao %c[%d][%d]: ", nome, i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void somarMatrizes(int matrizA[TAMANHO][TAMANHO], int matrizB[TAMANHO][TAMANHO], int matrizSoma[TAMANHO][TAMANHO]) {
    // A soma matricial ocorre somando os elementos de mesmos índices
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            matrizSoma[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }
}

void exibirResultadoOperacao(int matrizA[TAMANHO][TAMANHO], int matrizB[TAMANHO][TAMANHO], int matrizSoma[TAMANHO][TAMANHO]) {
    printf("\n--- RESULTADO DA SOMA (A + B = SOMA) ---\n");
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            printf("Posicao [%d][%d]: %3d + %3d = %3d\n",
                   i, j,
                   matrizA[i][j],
                   matrizB[i][j],
                   matrizSoma[i][j]);
        }
    }
}
