/*
============================================================================
Autor: Matheus da Silva Cezar
Descrição:
Programa em C que lê uma matriz 4x4 e conta a quantidade de números pares
presentes nela.

Objetivos:
- Preenchimento interativo de matrizes numéricas.
- Aplicação do operador de módulo (%) em estruturas bidimensionais.
- Separação de responsabilidades (leitura vs. processamento).
============================================================================
*/

#include <stdio.h>

// Definindo constante para o tamanho da matriz quadrada
#define TAMANHO 4

/*
============================================================================
Função: lerMatriz
Descrição:
Pede ao usuário para preencher os espaços da matriz.
============================================================================
*/
void lerMatriz(int matriz[TAMANHO][TAMANHO]) {
    printf("--- PREENCHIMENTO DA MATRIZ %dx%d ---\n", TAMANHO, TAMANHO);
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            printf("Digite o numero da posicao [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }
}

/*
============================================================================
Função: contarPares
Descrição:
Percorre toda a matriz verificando a paridade de cada elemento.
Retorna um inteiro com o total de pares encontrados.
============================================================================
*/
int contarPares(int matriz[TAMANHO][TAMANHO]) {
    int contPares = 0; // Variável contadora

    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            // Se o resto da divisão por 2 for 0, o número é par
            if (matriz[i][j] % 2 == 0) {
                contPares++;
            }
        }
    }
    return contPares;
}

/*
============================================================================
Função principal
============================================================================
*/
int main(void) {
    int matriz[TAMANHO][TAMANHO];

    printf("=== CONTADOR DE NUMEROS PARES ===\n\n");

    // 1. Chama a função para ler os dados
    lerMatriz(matriz);

    // 2. Chama a função que processa e guarda o resultado
    int totalPares = contarPares(matriz);

    // 3. Exibe o resultado final
    printf("\n=== RESULTADO ===\n");
    printf("Existem %d numeros pares na matriz.\n", totalPares);

    return 0;
}