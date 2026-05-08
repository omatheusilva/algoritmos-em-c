/*
============================================================================
Autor: Matheus da Silva Cezar
Descrição:
Programa em C que realiza a leitura de 10 números inteiros,
armazenando-os em um vetor e exibindo os valores em ordem crescente.

Objetivos:
- Praticar manipulação de vetores
- Utilizar funções
- Trabalhar com algoritmos de ordenação
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
Função: ordenarVetorCrescente
Descrição:
Ordena os elementos do vetor em ordem crescente.

Parâmetros:
- vetor[] : vetor de inteiros
- tamanho : quantidade de elementos do vetor
============================================================================
*/
void ordenarVetorCrescente(int vetor[], int tamanho) {

    for (int indiceAtual = 0; indiceAtual < tamanho - 1; indiceAtual++) {

        for (int proximoIndice = indiceAtual + 1;
             proximoIndice < tamanho;
             proximoIndice++) {

            if (vetor[indiceAtual] > vetor[proximoIndice]) {

                int valorTemporario = vetor[indiceAtual];

                vetor[indiceAtual] = vetor[proximoIndice];

                vetor[proximoIndice] = valorTemporario;
            }
        }
    }
}

/*
============================================================================
Função: exibirVetor
Descrição:
Exibe os elementos do vetor na tela.

Parâmetros:
- vetor[] : vetor de inteiros
- tamanho : quantidade de elementos do vetor
============================================================================
*/
void exibirVetor(int vetor[], int tamanho) {

    printf("\nVetor ordenado em ordem crescente:\n");

    for (int indice = 0; indice < tamanho; indice++) {
        printf("%d ", vetor[indice]);
    }

    printf("\n");
}

/*
============================================================================
Função principal
============================================================================
*/
int main(void) {
    int vetor[TAMANHO_VETOR];

    printf("=== ORDENACAO DE VETOR ===\n\n");

    lerVetor(vetor, TAMANHO_VETOR);

    ordenarVetorCrescente(vetor, TAMANHO_VETOR);

    exibirVetor(vetor, TAMANHO_VETOR);

    return 0;
}
