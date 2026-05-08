/*
============================================================================
Autor: Matheus da Silva Cezar
Descrição:
Programa em C que lê um valor inteiro e calcula a soma de todos os dígitos 
da representação decimal deste número. (Exemplo: 432 = 4 + 3 + 2 = 9).

Objetivos:
- Praticar lógica matemática aplicada à programação
- Utilizar funções
- Trabalhar com laços de repetição (while)
- Aplicar operadores de divisão inteira (/) e módulo (%)

============================================================================
*/

#include <stdio.h>

/*
============================================================================
Função: calcularSomaDigitos
Descrição:
Recebe um número inteiro, extrai cada um de seus dígitos e retorna a soma total.

Parâmetros:
- numero : valor inteiro a ter seus dígitos somados

Retorno:
- A soma dos dígitos do número
============================================================================
*/
int calcularSomaDigitos(int numero) {
    int soma = 0;
    int digitoAtual;

    // Se o número for negativo, converte para positivo para facilitar o cálculo
    if (numero < 0) {
        numero = -numero;
    }

    // Enquanto houver dígitos a serem processados
    while (numero > 0) {
        digitoAtual = numero % 10; // Extrai o último dígito (resto da divisão por 10)
        soma += digitoAtual;       // Adiciona o dígito à soma total
        numero /= 10;              // Remove o último dígito do número (quociente da divisão por 10)
    }

    return soma;
}

/*
============================================================================
Função principal
============================================================================
*/
int main(void) {
    int numeroInserido;
    int resultadoSoma;

    printf("=== SOMA DOS DIGITOS DE UM NUMERO ===\n\n");

    printf("Digite um valor inteiro: ");
    scanf("%d", &numeroInserido);

    // Chamada da função para calcular a soma
    resultadoSoma = calcularSomaDigitos(numeroInserido);

    // Exibição do resultado
    printf("\nA soma dos digitos do numero %d eh: %d\n", numeroInserido, resultadoSoma);

    return 0;
}