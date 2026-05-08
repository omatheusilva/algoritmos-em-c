/*
============================================================================
Autor: Matheus da Silva Cezar
Descrição:
Programa em C que lê um vetor de 3000 elementos e um valor 'n'.
Ele realiza o deslocamento circular (shift para a direita) de todos os
elementos do vetor em 'n' posições. Os elementos que ultrapassam o
tamanho do vetor retornam para o início.

Objetivos:
- Praticar manipulação de arrays (vetores) unidimensionais
- Utilizar funções e passagem de vetores como parâmetro
- Aplicar o operador módulo (%) para gerenciar índices circulares

============================================================================
*/

#include <stdio.h>

#define TAMANHO_VETOR 3000 // Constante que define o tamanho do array

/*
============================================================================
Função: deslocarVetorDireita
Descrição:
Realiza o deslocamento circular dos elementos de um vetor para a direita.

Parâmetros:
- vetorOriginal : array contendo os dados iniciais
- vetorAuxiliar : array temporário usado para evitar sobrescrita de dados
- tamanho       : quantidade de elementos no vetor
- deslocamento  : número de posições a serem deslocadas (n)
============================================================================
*/
void deslocarVetorDireita(int vetorOriginal[], int vetorAuxiliar[], int tamanho, int deslocamento) {
    // Ajuste de segurança: caso o deslocamento seja maior que o próprio tamanho
    deslocamento = deslocamento % tamanho;

    // Posiciona os elementos no vetor auxiliar utilizando aritmética modular
    for (int i = 0; i < tamanho; i++) {
        int novoIndice = (i + deslocamento) % tamanho;
        vetorAuxiliar[novoIndice] = vetorOriginal[i];
    }

    // Copia os dados do vetor auxiliar de volta para o vetor original
    for (int i = 0; i < tamanho; i++) {
        vetorOriginal[i] = vetorAuxiliar[i];
    }
}

/*
============================================================================
Função principal
============================================================================
*/
int main(void) {
    int vetorOriginal[TAMANHO_VETOR];
    int vetorAuxiliar[TAMANHO_VETOR];
    int deslocamento;

    printf("=== DESLOCAMENTO CIRCULAR DE VETOR ===\n\n");

    // 1. Leitura dos elementos
    printf("Digite os %d elementos do vetor:\n", TAMANHO_VETOR);
    for (int i = 0; i < TAMANHO_VETOR; i++) {
        scanf("%d", &vetorOriginal[i]);
    }

    // 2. Leitura do valor de deslocamento
    printf("\nDigite o valor do deslocamento para a direita (n < %d): ", TAMANHO_VETOR);
    scanf("%d", &deslocamento);

    if (deslocamento < 0) {
        printf("\nErro: O deslocamento deve ser um valor inteiro positivo.\n");
        return 1;
    }

    // 3. Chamada da função de processamento
    deslocarVetorDireita(vetorOriginal, vetorAuxiliar, TAMANHO_VETOR, deslocamento);

    // 4. Exibição do vetor resultante
    printf("\nVetor apos o deslocamento de %d posicoes:\n", deslocamento);
    for (int i = 0; i < TAMANHO_VETOR; i++) {
        printf("%d ", vetorOriginal[i]);
    }
    printf("\n");

    return 0;
}
