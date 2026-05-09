/*
============================================================================
Autor: Matheus da Silva Cezar
Descrição:
Programa em C que preenche uma matriz 4x4 e realiza uma busca pelo 
maior valor armazenado, exibindo-o na tela junto com as suas respectivas 
coordenadas (linha e coluna).

Objetivos:
- Praticar iteração e busca em Arrays Bidimensionais.
- Entender a lógica correta de inicialização de variáveis de comparação.
- Introduzir a passagem de parâmetros por referência (Ponteiros) para
  "retornar" múltiplos valores de uma única função.
============================================================================
*/

#include <stdio.h>

#define TAMANHO 4 // Define a dimensão da matriz quadrada (4x4)

/*
============================================================================
Função: encontrarMaiorElemento
Descrição:
Percorre a matriz para encontrar o maior valor e rastreia suas coordenadas.
Utiliza ponteiros para poder modificar as variáveis originais da main.

Parâmetros:
- matriz      : array bidimensional contendo os dados.
- maiorValor  : ponteiro para armazenar o maior número encontrado.
- linhaMaior  : ponteiro para armazenar o índice da linha.
- colunaMaior : ponteiro para armazenar o índice da coluna.
============================================================================
*/
void encontrarMaiorElemento(int matriz[TAMANHO][TAMANHO], int *maiorValor, int *linhaMaior, int *colunaMaior) {
    // Inicializa o maior valor como o primeiro elemento da matriz.
    // Isso previne bugs caso a matriz contenha apenas números negativos.
    *maiorValor = matriz[0][0];
    *linhaMaior = 0;
    *colunaMaior = 0;

    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            if (matriz[i][j] > *maiorValor) {
                *maiorValor = matriz[i][j]; // Atualiza o maior valor
                *linhaMaior = i;             // Salva a linha atual
                *colunaMaior = j;             // Salva a coluna atual
            }
        }
    }
}

/*
============================================================================
Função principal
============================================================================
*/
int main(void) {
    int matriz[TAMANHO][TAMANHO];
    int maior, linha, coluna;

    printf("=== CACA AO TESOURO: MAIOR VALOR NA MATRIZ ===\n\n");

    // 1. Leitura dos elementos da matriz
    printf("Digite os %d valores para preencher a matriz %dx%d:\n", TAMANHO * TAMANHO, TAMANHO, TAMANHO);
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // 2. Processamento: Chamada da função passando o endereço de memória (&) das variáveis
    encontrarMaiorElemento(matriz, &maior, &linha, &coluna);

    // 3. Exibição do resultado
    printf("\n=== RESULTADO DA BUSCA ===\n");
    printf("O maior valor encontrado foi: %d\n", maior);
    printf("Ele esta localizado na Linha %d, Coluna %d\n", linha, coluna);

    return 0;
}