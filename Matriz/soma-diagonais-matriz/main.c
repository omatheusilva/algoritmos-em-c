/*
============================================================================
Autor: Matheus da Silva Cezar
Descrição:
Programa em C que preenche uma matriz quadrada 5x5 e calcula, separadamente,
a soma dos elementos da sua diagonal principal e da sua diagonal secundária.

Objetivos:
- Praticar a manipulação de Arrays Bidimensionais.
- Utilizar funções simples (void) para separar o processamento da entrada de dados.
- Otimizar algoritmos: substituir iteração O(N^2) por O(N) no cálculo
  das diagonais.
============================================================================
*/

#include <stdio.h>

#define TAMANHO 5 // Define a dimensão da matriz quadrada (5x5)

/*
============================================================================
Função: calcularEImprimirDiagonais
Descrição:
Calcula a soma das diagonais utilizando apenas um laço de repetição e
imprime o resultado diretamente, sem a necessidade de usar ponteiros.

Parâmetros:
- matriz : array bidimensional contendo os dados digitados na main.
============================================================================
*/
void calcularEImprimirDiagonais(int matriz[TAMANHO][TAMANHO]) {
    int somaPrincipal = 0;
    int somaSecundaria = 0;

    // Laço único para percorrer as diagonais
    for (int i = 0; i < TAMANHO; i++) {
        // Diagonal Principal: Linha e Coluna são iguais (ex: [0][0], [1][1]...)
        somaPrincipal += matriz[i][i];

        // Diagonal Secundária: A coluna decresce conforme a linha aumenta
        somaSecundaria += matriz[i][TAMANHO - 1 - i];
    }

    // Exibição dos resultados diretamente dentro da função
    printf("\n=== RESULTADOS ===\n");
    printf("Soma da Diagonal Principal...: %d\n", somaPrincipal);
    printf("Soma da Diagonal Secundaria..: %d\n", somaSecundaria);
}

/*
============================================================================
Função principal
============================================================================
*/
int main(void) {
    int matriz[TAMANHO][TAMANHO];

    printf("=== BATALHA DAS DIAGONAIS (MATRIZ %dx%d) ===\n\n", TAMANHO, TAMANHO);

    // 1. Leitura dos elementos da matriz
    printf("Digite os %d valores para preencher a matriz:\n", TAMANHO * TAMANHO);
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // 2. Processamento e Saída: Chamada da função passando apenas a matriz
    calcularEImprimirDiagonais(matriz);

    return 0;
}
