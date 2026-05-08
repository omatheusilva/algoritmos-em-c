/*
============================================================================
Autor: Matheus da Silva Cezar
Descrição:
Programa em C que realiza a leitura de 6 números inteiros,
armazenando-os em um vetor e calculando a média dos valores.

Objetivos:
- Praticar manipulação de vetores
- Utilizar funções
- Trabalhar com cálculos matemáticos
- Aplicar boas práticas de programação

============================================================================
*/

#include <stdio.h>

#define TAMANHO_VETOR 6

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
Função: calcularSoma
Descrição:
Calcula a soma de todos os elementos do vetor.

Parâmetros:
- vetor[] : vetor de inteiros
- tamanho : quantidade de elementos do vetor

Retorno:
- Soma total dos elementos
============================================================================
*/
int calcularSoma(int vetor[], int tamanho) {
    int somaTotal = 0;

    for (int indice = 0; indice < tamanho; indice++) {
        somaTotal += vetor[indice];
    }

    return somaTotal;
}

/*
============================================================================
Função: calcularMedia
Descrição:
Calcula a média dos elementos do vetor.

Parâmetros:
- somaTotal : soma dos elementos
- quantidadeElementos : quantidade de números do vetor

Retorno:
- Média dos valores
============================================================================
*/
float calcularMedia(int somaTotal, int quantidadeElementos) {
    return (float) somaTotal / quantidadeElementos;
}

/*
============================================================================
Função principal
============================================================================
*/
int main(void) {
    int vetor[TAMANHO_VETOR];
    int somaTotal;
    float mediaFinal;

    printf("=== CALCULO DA MEDIA DOS NUMEROS ===\n\n");

    lerVetor(vetor, TAMANHO_VETOR);

    somaTotal = calcularSoma(vetor, TAMANHO_VETOR);

    mediaFinal = calcularMedia(somaTotal, TAMANHO_VETOR);

    printf("\nA media dos numeros eh: %.2f\n", mediaFinal);

    return 0;
}
