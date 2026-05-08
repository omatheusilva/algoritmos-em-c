/*
============================================================================
Autor: Matheus da Silva Cezar
Descrição:
Programa em C que lê um valor inteiro n informado pelo usuário e
calcula o n-ésimo elemento da série de Fibonacci (0, 1, 1, 2, 3, 5, 8...).

Objetivos:
- Praticar lógica de programação e matemática
- Utilizar funções
- Trabalhar com laços de repetição (for)
- Aplicar boas práticas de programação e nomenclatura de variáveis

============================================================================
*/

#include <stdio.h>

/*
============================================================================
Função: calcularFibonacci
Descrição:
Calcula o n-ésimo termo da sequência de Fibonacci utilizando um laço 'for'.

Parâmetros:
- n : posição do elemento desejado na sequência

Retorno:
- O valor do n-ésimo elemento da série
============================================================================
*/
int calcularFibonacci(int n) {
    // Casos base da sequência de Fibonacci
    if (n == 1) {
        return 0;
    }
    if (n == 2) {
        return 1;
    }

    int anterior = 0;
    int atual = 1;
    int proximo;

    // O laço começa no 3º elemento e vai até o n-ésimo
    for (int i = 3; i <= n; i++) {
        proximo = anterior + atual;
        anterior = atual;
        atual = proximo;
    }

    return atual;
}

/*
============================================================================
Função principal
============================================================================
*/
int main(void) {
    int n;
    int resultado;

    printf("=== N-ESIMO ELEMENTO DE FIBONACCI ===\n\n");

    printf("Digite a posicao (N) desejada na sequencia: ");
    scanf("%d", &n);

    // Validação para garantir que o usuário digitou uma posição válida
    if (n <= 0) {
        printf("\nErro: A posicao deve ser um numero inteiro maior que zero.\n");
        return 1;
    }

    // Chamada da função
    resultado = calcularFibonacci(n);

    // Exibição do resultado
    printf("\nO %dº elemento da serie de Fibonacci eh: %d\n", n, resultado);

    return 0;
}
