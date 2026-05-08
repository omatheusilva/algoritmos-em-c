/*
============================================================================
Autor: Matheus da Silva Cezar
Descrição:
Programa em C que realiza a leitura de 10 números inteiros,
armazenando-os em um vetor e contabilizando quantos valores são pares.

Objetivos:
- Praticar manipulação de vetores
- Utilizar funções
- Trabalhar com operadores matemáticos
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
Função: contarNumerosPares
Descrição:
Percorre o vetor e contabiliza quantos números são pares.

Parâmetros:
- vetor[] : vetor de inteiros
- tamanho : quantidade de elementos do vetor

Retorno:
- Quantidade de números pares encontrados
============================================================================
*/
int contarNumerosPares(int vetor[], int tamanho) {
    int quantidadePares = 0;

    for (int indice = 0; indice < tamanho; indice++) {
        if (vetor[indice] % 2 == 0) {
            quantidadePares++;
        }
    }

    return quantidadePares;
}

/*
============================================================================
Função principal
============================================================================
*/
int main(void) {
    int vetor[TAMANHO_VETOR];
    int quantidadePares;

    printf("=== CONTADOR DE NUMEROS PARES ===\n\n");

    lerVetor(vetor, TAMANHO_VETOR);

    quantidadePares = contarNumerosPares(vetor, TAMANHO_VETOR);

    printf("\nQuantidade de numeros pares: %d\n", quantidadePares);

    return 0;
}
