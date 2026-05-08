/*
============================================================================
Autor: Matheus da Silva Cezar
Descrição:
Programa em C que realiza a leitura de 10 números inteiros,
armazenando-os em um vetor e identificando o número que mais
aparece, juntamente com sua frequência.

Objetivos:
- Praticar manipulação de vetores
- Utilizar funções
- Trabalhar com contagem de frequência
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

    printf("Digite %d numeros:\n", tamanho);

    for (int indice = 0; indice < tamanho; indice++) {
        scanf("%d", &vetor[indice]);
    }
}

/*
============================================================================
Função: contarFrequenciaNumero
Descrição:
Conta quantas vezes um número aparece no vetor.

Parâmetros:
- vetor[] : vetor de inteiros
- tamanho : quantidade de elementos do vetor
- valor : número a ser verificado

Retorno:
- Quantidade de ocorrências do número
============================================================================
*/
int contarFrequenciaNumero(
        int vetor[],
        int tamanho,
        int valor
) {

    int quantidadeOcorrencias = 0;

    for (int indice = 0; indice < tamanho; indice++) {

        if (vetor[indice] == valor) {
            quantidadeOcorrencias++;
        }
    }

    return quantidadeOcorrencias;
}

/*
============================================================================
Função: encontrarNumeroMaisFrequente
Descrição:
Identifica o número que mais aparece no vetor.

Parâmetros:
- vetor[] : vetor de inteiros
- tamanho : quantidade de elementos do vetor
- frequencia : ponteiro para armazenar a frequência encontrada

Retorno:
- Número mais frequente do vetor
============================================================================
*/
int encontrarNumeroMaisFrequente(
        int vetor[],
        int tamanho,
        int *frequencia
) {

    int maiorFrequencia = 0;
    int numeroMaisFrequente = vetor[0];

    for (int indice = 0; indice < tamanho; indice++) {

        int frequenciaAtual = contarFrequenciaNumero(
                vetor,
                tamanho,
                vetor[indice]
        );

        if (frequenciaAtual > maiorFrequencia) {

            maiorFrequencia = frequenciaAtual;
            numeroMaisFrequente = vetor[indice];
        }
    }

    *frequencia = maiorFrequencia;

    return numeroMaisFrequente;
}

/*
============================================================================
Função principal
============================================================================
*/
int main(void) {

    int vetor[TAMANHO_VETOR];

    int maiorQuantidade;
    int numeroMaisFrequente;

    printf("=== NUMERO MAIS FREQUENTE DO VETOR ===\n\n");

    lerVetor(vetor, TAMANHO_VETOR);

    numeroMaisFrequente = encontrarNumeroMaisFrequente(vetor,TAMANHO_VETOR,&maiorQuantidade);

    printf("\nNumero que mais aparece: %d\n",numeroMaisFrequente);

    printf("Quantidade de vezes: %d\n",maiorQuantidade);

    return 0;
}
