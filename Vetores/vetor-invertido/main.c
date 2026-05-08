/*
============================================================================
Autor: Matheus da Silva Cezar
Descrição:
Programa em C que realiza a leitura de 8 números inteiros,
armazenando-os em um vetor e exibindo os valores na ordem inversa.

Objetivos:
- Praticar manipulação de vetores
- Utilizar funções
- Trabalhar com estruturas de repetição
- Aplicar boas práticas de programação

============================================================================
*/

#include <stdio.h>

#define TAMANHO_VETOR 8

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
Função: exibirVetorInvertido
Descrição:
Exibe os elementos do vetor na ordem inversa.

Parâmetros:
- vetor[] : vetor de inteiros
- tamanho : quantidade de elementos do vetor
============================================================================
*/
void exibirVetorInvertido(int vetor[], int tamanho) {
    printf("\nVetor invertido:\n");

    for (int indice = tamanho - 1; indice >= 0; indice--) {
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

    printf("=== EXIBICAO DE VETOR INVERTIDO ===\n\n");

    lerVetor(vetor, TAMANHO_VETOR);

    exibirVetorInvertido(vetor, TAMANHO_VETOR);

    return 0;
}
