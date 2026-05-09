/*
============================================================================
Autor: Matheus da Silva Cezar
Descrição:
Programa em C que declara uma matriz quadrada (3x3), recebe 9 valores
inteiros do usuário para preenchê-la e calcula o somatório total de todos
os elementos inseridos.

Objetivos:
- Introduzir a manipulação de Arrays Bidimensionais (Matrizes).
- Utilizar laços de repetição aninhados (for dentro de for).
- Praticar a passagem de matrizes como parâmetro para funções.
============================================================================
*/

#include <stdio.h>

#define TAMANHO 3 // Define as linhas e colunas da matriz quadrada

/*
============================================================================
Função: calcularSomaMatriz
Descrição:
Percorre todos os elementos da matriz bidimensional e acumula seus valores.

Parâmetros:
- matriz : array bidimensional contendo os dados.

Retorno:
- O valor inteiro resultante da soma de todos os elementos.
============================================================================
*/
int calcularSomaMatriz(int matriz[TAMANHO][TAMANHO]) {
    int soma = 0;

    // Laço externo percorre as linhas
    for (int i = 0; i < TAMANHO; i++) {
        // Laço interno percorre as colunas de cada linha
        for (int j = 0; j < TAMANHO; j++) {
            soma += matriz[i][j];
        }
    }

    return soma;
}

/*
============================================================================
Função principal
============================================================================
*/
int main(void) {
    int matriz[TAMANHO][TAMANHO];

    printf("=== SOMATORIO DE MATRIZ 3x3 ===\n\n");

    // 1. Leitura dos elementos da matriz
    printf("Digite os %d valores para preencher a matriz:\n", TAMANHO * TAMANHO);
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // 2. Processamento: Chamada da função de soma
    int somaTotal = calcularSomaMatriz(matriz);

    // 3. Exibição do resultado
    printf("\nO valor do somatorio de todos os elementos e: %d\n", somaTotal);

    return 0;
}
