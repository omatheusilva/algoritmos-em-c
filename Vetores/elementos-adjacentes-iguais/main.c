/*
============================================================================
Autor: Matheus da Silva Cezar
Descrição:
Programa em C que lê um vetor de 5000 elementos inteiros e, após a
leitura completa, verifica se existem posições adjacentes (vizinhas)
que contêm exatamente o mesmo valor.

Objetivos:
- Praticar manipulação e iteração de arrays (vetores).
- Utilizar funções com retorno lógico (booleano).
- Otimizar laços de repetição interrompendo a busca quando o alvo é encontrado.
- Cuidar dos limites de índices de vetores (n-1).

============================================================================
*/

#include <stdio.h>

#define TAMANHO_VETOR 5000 // Constante que define o tamanho do array

/*
============================================================================
Função: verificarAdjacentesIguais
Descrição:
Percorre o vetor comparando a posição atual com a próxima. Interrompe a
execução e retorna verdadeiro assim que encontrar a primeira ocorrência.

Parâmetros:
- vetor   : array contendo os dados a serem analisados
- tamanho : quantidade de elementos no vetor

Retorno:
- 1 (Verdadeiro) se encontrar posições adjacentes iguais, 0 (Falso) caso não.
============================================================================
*/
int verificarAdjacentesIguais(int vetor[], int tamanho) {
    // O laço vai até tamanho - 1 para evitar acessar uma posição fora do vetor no vetor[i + 1]
    for (int i = 0; i < tamanho - 1; i++) {
        if (vetor[i] == vetor[i + 1]) {
            return 1; // Encontrou adjacentes iguais, encerra a função imediatamente
        }
    }

    return 0; // Percorreu tudo e não encontrou nada
}

/*
============================================================================
Função principal
============================================================================
*/
int main(void) {
    int vetorNumeros[TAMANHO_VETOR];

    printf("=== VERIFICADOR DE ELEMENTOS ADJACENTES ===\n\n");

    // 1. Leitura dos elementos
    printf("Digite os %d elementos do vetor:\n", TAMANHO_VETOR);
    for (int i = 0; i < TAMANHO_VETOR; i++) {
        scanf("%d", &vetorNumeros[i]);
    }

    // 2. Chamada da função e exibição do resultado
    printf("\nAnalisando o vetor...\n");

    if (verificarAdjacentesIguais(vetorNumeros, TAMANHO_VETOR)) {
        printf("Resultado: Existem posicoes adjacentes com valores iguais.\n");
    } else {
        printf("Resultado: NAO existem posicoes adjacentes com valores iguais.\n");
    }

    return 0;
}
