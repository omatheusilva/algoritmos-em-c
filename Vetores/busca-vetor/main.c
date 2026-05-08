/*
============================================================================
Autor: Matheus da Silva Cezar
Descrição:
Programa em C que realiza a leitura de 10 números inteiros,
armazenando-os em um vetor e permitindo a busca de um valor específico.

Objetivos:
- Praticar manipulação de vetores
- Utilizar funções
- Trabalhar com busca linear
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
Função: buscarValorNoVetor
Descrição:
Realiza a busca de um valor no vetor e exibe as posições encontradas.

Parâmetros:
- vetor[] : vetor de inteiros
- tamanho : quantidade de elementos do vetor
- valorBuscado : número que será pesquisado

Retorno:
- Quantidade de ocorrências encontradas
============================================================================
*/
int buscarValorNoVetor(int vetor[], int tamanho, int valorBuscado) {
    int quantidadeOcorrencias = 0;

    for (int indice = 0; indice < tamanho; indice++) {
        if (vetor[indice] == valorBuscado) {
            printf("O valor %d esta na posicao %d\n",
                   valorBuscado,
                   indice + 1);

            quantidadeOcorrencias++;
        }
    }

    return quantidadeOcorrencias;
}

/*
============================================================================
Função principal
============================================================================
*/
int main(void) {
    int numeros[TAMANHO_VETOR];
    int valorBuscado;
    int quantidadeEncontrada;

    printf("=== BUSCA DE VALOR EM VETOR ===\n\n");

    lerVetor(numeros, TAMANHO_VETOR);

    printf("\nDigite um valor para buscar: ");
    scanf("%d", &valorBuscado);

    printf("\n");

    quantidadeEncontrada = buscarValorNoVetor(
            numeros,
            TAMANHO_VETOR,
            valorBuscado
    );

    if (quantidadeEncontrada == 0) {
        printf("O valor %d nao esta no vetor\n", valorBuscado);
    }

    return 0;
}
