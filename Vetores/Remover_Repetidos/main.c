/*
============================================================================
Autor: Matheus da Silva Cezar
Descrição:
Programa em C que realiza a leitura de 10 números inteiros,
armazenando-os em um vetor e exibindo apenas os valores únicos,
ignorando números repetidos.

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
Função: verificarNumeroRepetido
Descrição:
Verifica se um número já apareceu anteriormente no vetor.

Parâmetros:
- vetor[] : vetor de inteiros
- posicaoAtual : posição atual do vetor

Retorno:
- 1 se o número já apareceu
- 0 caso contrário
============================================================================
*/
int verificarNumeroRepetido(int vetor[], int posicaoAtual) {
    for (int indice = 0; indice < posicaoAtual; indice++) {
        if (vetor[posicaoAtual] == vetor[indice]) {
            return 1;
        }
    }

    return 0;
}

/*
============================================================================
Função: exibirValoresUnicos
Descrição:
Exibe apenas os números que aparecem pela primeira vez no vetor.

Parâmetros:
- vetor[] : vetor de inteiros
- tamanho : quantidade de elementos do vetor
============================================================================
*/
void exibirValoresUnicos(int vetor[], int tamanho) {
    printf("\nValores unicos:\n");

    for (int indice = 0; indice < tamanho; indice++) {

        int numeroRepetido = verificarNumeroRepetido(
                vetor,
                indice
        );

        if (numeroRepetido == 0) {
            printf("%d ", vetor[indice]);
        }
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

    printf("=== EXIBICAO DE VALORES UNICOS ===\n\n");

    lerVetor(vetor, TAMANHO_VETOR);

    exibirValoresUnicos(vetor, TAMANHO_VETOR);

    return 0;
}
