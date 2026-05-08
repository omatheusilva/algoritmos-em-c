/*
============================================================================
Autor: Matheus da Silva Cezar
Descrição:
Programa em C que realiza a leitura de 500 números inteiros,
armazenando-os em um vetor sem permitir valores repetidos.

Objetivos:
- Praticar manipulação de vetores
- Utilizar funções
- Trabalhar com validação de dados
- Aplicar boas práticas de programação

============================================================================
*/

#include <stdio.h>

#define TAMANHO_VETOR 500

/*
============================================================================
Função: verificarValorExistente
Descrição:
Verifica se um valor já existe no vetor.

Parâmetros:
- vetor[] : vetor de inteiros
- tamanhoAtual : quantidade atual de elementos preenchidos
- valor : número a ser verificado

Retorno:
- 1 se o valor já existir
- 0 caso contrário
============================================================================
*/
int verificarValorExistente(
        int vetor[],
        int tamanhoAtual,
        int valor
) {

    for (int indice = 0; indice < tamanhoAtual; indice++) {

        if (vetor[indice] == valor) {
            return 1;
        }
    }

    return 0;
}

/*
============================================================================
Função: preencherVetorSemRepeticao
Descrição:
Realiza a leitura dos números garantindo que não existam valores
repetidos no vetor.

Parâmetros:
- vetor[] : vetor de inteiros
- tamanho : quantidade de elementos do vetor
============================================================================
*/
void preencherVetorSemRepeticao(
        int vetor[],
        int tamanho
) {

    int valorInformado;
    int valorRepetido;

    for (int indice = 0; indice < tamanho; indice++) {

        printf("Digite o valor para a posicao %d: ",
               indice);

        scanf("%d", &valorInformado);

        valorRepetido = verificarValorExistente(
                vetor,
                indice,
                valorInformado
        );

        if (valorRepetido == 1) {

            printf("Valor repetido! Digite outro.\n");

            indice--;
        }
        else {

            vetor[indice] = valorInformado;
        }
    }
}

/*
============================================================================
Função: exibirVetor
Descrição:
Exibe todos os elementos do vetor.

Parâmetros:
- vetor[] : vetor de inteiros
- tamanho : quantidade de elementos do vetor
============================================================================
*/
void exibirVetor(int vetor[], int tamanho) {

    printf("\nVetor sem repetidos:\n");

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

    int numeros[TAMANHO_VETOR];

    printf("=== PREENCHIMENTO DE VETOR SEM REPETICAO ===\n\n");

    preencherVetorSemRepeticao(
            numeros,
            TAMANHO_VETOR
    );

    exibirVetor(
            numeros,
            TAMANHO_VETOR
    );

    return 0;
}
