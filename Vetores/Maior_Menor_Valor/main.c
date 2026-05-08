/*
============================================================================
Autor: Matheus da Silva Cezar
Descrição:
Programa em C que realiza a leitura de 10 números inteiros,
armazenando-os em um vetor e identificando o maior e o menor valor.

Objetivos:
- Praticar manipulação de vetores
- Utilizar funções
- Trabalhar com comparação de valores
- Aplicar boas práticas de programação

============================================================================
*/

#include <stdio.h>

#define TAMANHO_VETOR 10

/*
============================================================================
Função: lerVetor
Descrição:
Realiza a leitura dos números informados pelo usuário.

Parâmetros:
- vetor[] : vetor de inteiros
- tamanho : quantidade de elementos do vetor
============================================================================
*/
void lerVetor(int vetor[], int tamanho) {
    for (int indice = 0; indice < tamanho; indice++) {
        printf("Digite o %dº numero: ", indice + 1);
        scanf("%d", &vetor[indice]);
    }
}

/*
============================================================================
Função: encontrarMaiorValor
Descrição:
Percorre o vetor e retorna o maior valor encontrado.

Parâmetros:
- vetor[] : vetor de inteiros
- tamanho : quantidade de elementos do vetor

Retorno:
- Maior valor do vetor
============================================================================
*/
int encontrarMaiorValor(int vetor[], int tamanho) {
    int maiorValor = vetor[0];

    for (int indice = 1; indice < tamanho; indice++) {
        if (vetor[indice] > maiorValor) {
            maiorValor = vetor[indice];
        }
    }

    return maiorValor;
}

/*
============================================================================
Função: encontrarMenorValor
Descrição:
Percorre o vetor e retorna o menor valor encontrado.

Parâmetros:
- vetor[] : vetor de inteiros
- tamanho : quantidade de elementos do vetor

Retorno:
- Menor valor do vetor
============================================================================
*/
int encontrarMenorValor(int vetor[], int tamanho) {
    int menorValor = vetor[0];

    for (int indice = 1; indice < tamanho; indice++) {
        if (vetor[indice] < menorValor) {
            menorValor = vetor[indice];
        }
    }

    return menorValor;
}

/*
============================================================================
Função principal
============================================================================
*/
int main(void) {
    int vetor[TAMANHO_VETOR];
    int maiorValor;
    int menorValor;

    printf("=== MAIOR E MENOR VALOR DO VETOR ===\n\n");

    lerVetor(vetor, TAMANHO_VETOR);

    maiorValor = encontrarMaiorValor(vetor, TAMANHO_VETOR);
    menorValor = encontrarMenorValor(vetor, TAMANHO_VETOR);

    printf("\nMenor valor encontrado: %d\n", menorValor);
    printf("Maior valor encontrado: %d\n", maiorValor);

    return 0;
}
