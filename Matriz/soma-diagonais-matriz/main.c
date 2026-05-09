/*
============================================================================
Autor: Matheus da Silva Cezar
Descrição:
Programa em C que preenche uma matriz quadrada 5x5 e calcula, separadamente,
a soma dos elementos da sua diagonal principal e da sua diagonal secundária.

Objetivos:
- Praticar a manipulação de Arrays Bidimensionais.
- Otimizar algoritmos: substituir iteração O(N^2) por O(N) no cálculo
  das diagonais.
- Utilizar passagem por referência (ponteiros) para exportar múltiplos
  resultados de uma função.
============================================================================
*/

#include <stdio.h>

#define TAMANHO 5 // Define a dimensão da matriz quadrada (5x5)

/*
============================================================================
Função: calcularSomasDiagonais
Descrição:
Calcula a soma das diagonais utilizando apenas um laço de repetição,
acessando diretamente os índices matemáticos correspondentes.

Parâmetros:
- matriz         : array bidimensional contendo os dados.
- somaPrincipal  : ponteiro para armazenar o resultado da diagonal principal.
- somaSecundaria : ponteiro para armazenar o resultado da diagonal secundária.
============================================================================
*/
void calcularSomasDiagonais(int matriz[TAMANHO][TAMANHO], int *somaPrincipal, int *somaSecundaria) {
    *somaPrincipal = 0;
    *somaSecundaria = 0;

    // Otimização: Apenas 1 laço for (O(N)) em vez de 2 aninhados (O(N^2))
    for (int i = 0; i < TAMANHO; i++) {
        // Diagonal Principal: Linha e Coluna são iguais (ex: [0][0], [1][1]...)
        *somaPrincipal += matriz[i][i];

        // Diagonal Secundária: A coluna decresce conforme a linha aumenta
        // (ex: [0][4], [1][3], [2][2]...)
        *somaSecundaria += matriz[i][TAMANHO - 1 - i];
    }
}

/*
============================================================================
Função principal
============================================================================
*/
int main(void) {
    int matriz[TAMANHO][TAMANHO];
    int diagonalPrincipal, diagonalSecundaria;

    printf("=== BATALHA DAS DIAGONAIS (MATRIZ %dx%d) ===\n\n", TAMANHO, TAMANHO);

    // 1. Leitura dos elementos da matriz
    printf("Digite os %d valores para preencher a matriz:\n", TAMANHO * TAMANHO);
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // 2. Processamento: Passagem das variáveis por referência (&)
    calcularSomasDiagonais(matriz, &diagonalPrincipal, &diagonalSecundaria);

    // 3. Exibição dos resultados
    printf("\n=== RESULTADOS ===\n");
    printf("Soma da Diagonal Principal...: %d\n", diagonalPrincipal);
    printf("Soma da Diagonal Secundaria..: %d\n", diagonalSecundaria);

    return 0;
}
