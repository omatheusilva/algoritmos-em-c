/*
============================================================================
Autor: Matheus da Silva Cezar
Descrição:
Programa em C que lê um vetor de 1000 elementos inteiros e verifica se 
existe algum número dentro dele que seja estritamente maior que a soma 
de todos os outros 999 elementos combinados.

Objetivos:
- Praticar manipulação de arrays (vetores).
- Trabalhar com tipos de dados de maior capacidade (long long) para 
  evitar overflow na soma de muitos elementos.(desnecessário caso TAMANHO_VETOR menor)
- Aplicar lógica matemática para otimizar processamento (O(n)).
- Utilizar funções com retorno lógico.

============================================================================
*/

#include <stdio.h>

#define TAMANHO_VETOR 1000 // Constante que define o tamanho do array

/*
============================================================================
Função: verificarElementoMaiorQueSoma
Descrição:
Calcula a soma total do vetor e verifica se existe algum elemento que seja
maior que a soma de todos os outros restantes (somaTotal - elemento).

Parâmetros:
- vetor   : array contendo os dados a serem analisados
- tamanho : quantidade de elementos no vetor

Retorno:
- 1 (Verdadeiro) se encontrar um elemento com essa característica, 0 caso não.
============================================================================
*/
int verificarElementoMaiorQueSoma(int vetor[], int tamanho) {
    long long somaTotal = 0;

    // 1. Primeiro passo: calcular a soma de todos os elementos
    for (int i = 0; i < tamanho; i++) {
        somaTotal += vetor[i];
    }

    // 2. Segundo passo: verificar a condição para cada elemento
    // A soma dos "outros" elementos é simplesmente a somaTotal menos o elemento atual
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] > (somaTotal - vetor[i])) {
            return 1; // Encontrou, encerra a função
        }
    }
    
    return 0; // Não encontrou
}

/*
============================================================================
Função principal
============================================================================
*/
int main(void) {
    int vetorNumeros[TAMANHO_VETOR];

    printf("=== VERIFICADOR DE ELEMENTO MAIOR QUE A SOMA ===\n\n");

    // Leitura dos elementos
    printf("Digite os %d elementos do vetor:\n", TAMANHO_VETOR);
    for (int i = 0; i < TAMANHO_VETOR; i++) {
        scanf("%d", &vetorNumeros[i]);
    }

    printf("\nAnalisando o vetor...\n");

    // Chamada da função e exibição do resultado
    if (verificarElementoMaiorQueSoma(vetorNumeros, TAMANHO_VETOR)) {
        printf("Resultado: Existe um elemento que eh MAIOR que a soma de todos os outros.\n");
    } else {
        printf("Resultado: NAO existe nenhum elemento com essa caracteristica.\n");
    }

    return 0;
}