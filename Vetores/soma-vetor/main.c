/*
============================================================================
Autor: Matheus da Silva
Descrição:
Programa em C que realiza a leitura de 8 números inteiros,
armazenando-os em um vetor e exibindo a soma acumulada e a soma final.

Objetivo:
- Praticar manipulação de vetores
- Utilizar funções
- Trabalhar com estruturas de repetição

============================================================================
*/

#include <stdio.h>

#define TAMANHO_VETOR 8

/*
============================================================================
Função: lerVetor
Descrição:
Realiza a leitura dos valores informados pelo usuário e armazena no vetor.

Parâmetros:
- vetor[]: vetor de inteiros
- tamanho: quantidade de posições do vetor
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
Função: calcularSomaAcumulada
Descrição:
Calcula e exibe a soma acumulada dos elementos do vetor.

Parâmetros:
- vetor[]: vetor de inteiros
- tamanho: quantidade de posições do vetor

Retorno:
- Soma total dos elementos
============================================================================
*/
int calcularSomaAcumulada(int vetor[], int tamanho) {
    int somaTotal = 0;

    for (int indice = 0; indice < tamanho; indice++) {
        somaTotal += vetor[indice];

        printf("Soma acumulada ate o momento: %d\n", somaTotal);
    }

    return somaTotal;
}

/*
============================================================================
Função principal
============================================================================
*/
int main(void) {
    int numeros[TAMANHO_VETOR];
    int somaFinal;

    printf("=== CALCULO DE SOMA EM VETOR ===\n\n");

    lerVetor(numeros, TAMANHO_VETOR);

    printf("\n");

    somaFinal = calcularSomaAcumulada(numeros, TAMANHO_VETOR);

    printf("\nSoma final dos elementos: %d\n", somaFinal);

    return 0;
}
