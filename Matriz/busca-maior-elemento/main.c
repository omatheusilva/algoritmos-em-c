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
- Utilizar funções simples para separar blocos de código.
============================================================================
*/

#include <stdio.h>

#define TAMANHO 4 // Define a dimensão da matriz quadrada (4x4)

/*
============================================================================
Função: buscarEImprimirMaior
Descrição:
Percorre a matriz para encontrar o maior valor e suas coordenadas.
Como não estamos usando ponteiros, a própria função se encarrega de
imprimir o resultado final na tela.

Parâmetros:
- matriz : array bidimensional contendo os dados digitados na main.
============================================================================
*/
void buscarEImprimirMaior(int matriz[TAMANHO][TAMANHO]) {
    // Inicializa assumindo que o primeiro elemento é o maior.
    // Isso previne bugs caso a matriz contenha apenas números negativos.
    int maior = matriz[0][0];
    int linha_maior = 0;
    int coluna_maior = 0;

    // Laços de repetição para percorrer a matriz
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {

            // Condicional: se encontrar um número maior, atualiza as variáveis
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
                linha_maior = i;
                coluna_maior = j;
            }

        }
    }

    // Exibição dos resultados diretamente dentro da função
    printf("\n=== RESULTADO DA BUSCA ===\n");
    printf("O maior valor encontrado foi: %d\n", maior);
    printf("Ele esta localizado na Linha %d, Coluna %d\n", linha_maior, coluna_maior);
}

/*
============================================================================
Função principal
============================================================================
*/
int main(void) {
    int matriz[TAMANHO][TAMANHO];

    printf("=== CACA AO TESOURO: MAIOR VALOR NA MATRIZ ===\n\n");

    // 1. Leitura dos elementos da matriz
    printf("Digite os %d valores para preencher a matriz %dx%d:\n", TAMANHO * TAMANHO, TAMANHO, TAMANHO);
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // 2. Processamento e Saída: Chamada da função passando apenas a matriz
    buscarEImprimirMaior(matriz);

    return 0;
}