/*
============================================================================
Autor: Matheus da Silva Cezar
Descrição:
Programa em C que realiza a leitura de dois vetores inteiros,
identificando os elementos em comum entre eles sem repetição.

Objetivos:
- Praticar manipulação de vetores
- Utilizar funções
- Trabalhar com interseção de conjuntos
- Aplicar boas práticas de programação

============================================================================
*/

#include <stdio.h>

#define TAMANHO_VETOR 5

/*
============================================================================
Função: lerVetor
Descrição:
Realiza a leitura dos elementos de um vetor.

Parâmetros:
- vetor[] : vetor de inteiros
- tamanho : quantidade de elementos do vetor
- nomeVetor : identificação do vetor
============================================================================
*/
void lerVetor(int vetor[], int tamanho, char nomeVetor) {

    printf("Vetor %c:\n", nomeVetor);

    for (int indice = 0; indice < tamanho; indice++) {
        printf("Digite o %dº numero: ", indice + 1);
        scanf("%d", &vetor[indice]);
    }
}

/*
============================================================================
Função: verificarElementoExistente
Descrição:
Verifica se um elemento já existe no vetor.

Parâmetros:
- vetor[] : vetor de inteiros
- tamanho : quantidade de elementos válidos
- valor : número a ser verificado

Retorno:
- 1 se o valor existir
- 0 caso contrário
============================================================================
*/
int verificarElementoExistente(int vetor[], int tamanho, int valor) {

    for (int indice = 0; indice < tamanho; indice++) {
        if (vetor[indice] == valor) {
            return 1;
        }
    }

    return 0;
}

/*
============================================================================
Função: calcularInterseccao
Descrição:
Calcula a interseção entre dois vetores sem repetir elementos.

Parâmetros:
- vetorA[] : primeiro vetor
- vetorB[] : segundo vetor
- vetorInterseccao[] : vetor resultado
- tamanho : quantidade de elementos dos vetores

Retorno:
- Quantidade de elementos da interseção
============================================================================
*/
int calcularInterseccao(
        int vetorA[],
        int vetorB[],
        int vetorInterseccao[],
        int tamanho
) {

    int quantidadeInterseccao = 0;

    for (int indiceA = 0; indiceA < tamanho; indiceA++) {

        for (int indiceB = 0; indiceB < tamanho; indiceB++) {

            if (vetorA[indiceA] == vetorB[indiceB]) {

                int elementoExiste = verificarElementoExistente(
                        vetorInterseccao,
                        quantidadeInterseccao,
                        vetorA[indiceA]
                );

                if (elementoExiste == 0) {

                    vetorInterseccao[quantidadeInterseccao] =
                            vetorA[indiceA];

                    quantidadeInterseccao++;
                }
            }
        }
    }

    return quantidadeInterseccao;
}

/*
============================================================================
Função: exibirVetor
Descrição:
Exibe os elementos de um vetor.

Parâmetros:
- vetor[] : vetor de inteiros
- tamanho : quantidade de elementos do vetor
============================================================================
*/
void exibirVetor(int vetor[], int tamanho) {

    printf("\nVetor C (interseccao sem repeticao):\n");

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

    int vetorA[TAMANHO_VETOR];
    int vetorB[TAMANHO_VETOR];
    int vetorInterseccao[TAMANHO_VETOR];

    int quantidadeElementosInterseccao;

    printf("=== INTERSECCAO ENTRE VETORES ===\n\n");

    lerVetor(vetorA, TAMANHO_VETOR, 'A');

    printf("\n");

    lerVetor(vetorB, TAMANHO_VETOR, 'B');

    quantidadeElementosInterseccao = calcularInterseccao(
            vetorA,
            vetorB,
            vetorInterseccao,
            TAMANHO_VETOR
    );

    exibirVetor(
            vetorInterseccao,
            quantidadeElementosInterseccao
    );

    return 0;
}
