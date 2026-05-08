/*
============================================================================
Autor: Matheus da Silva Cezar
Descrição:
Programa em C que realiza operações aritméticas básicas entre dois números
inteiros, com base em uma operação escolhida pelo usuário (+, -, *, /).

Objetivos:
- Praticar estrutura switch-case
- Trabalhar com operações matemáticas
- Validar divisão por zero
- Entrada e saída de dados
============================================================================
*/

#include <stdio.h>

int main(void) {

    // Variável para armazenar a operação escolhida
    char operacao;

    // Variáveis para os dois números
    float numero1, numero2;

    // Exibe menu de operações
    printf("+ Soma\n- Subtracao\n* Multiplicacao\n/ Divisao\n\n");

    // Leitura da operação escolhida
    printf("Digite a operacao desejada: ");
    scanf(" %c", &operacao); // espaço evita problema com buffer

    // Leitura dos valores
    printf("Digite o valor 1: ");
    scanf("%f", &numero1);

    printf("Digite o valor 2: ");
    scanf("%f", &numero2);

    // Estrutura de decisão para escolher operação
    switch (operacao) {

        case '+':
            // Soma
            printf("%.2f + %.2f = %.2f\n", numero1, numero2, numero1 + numero2);
            break;

        case '-':
            // Subtração
            printf("%.2f - %.2f = %.2f\n", numero1, numero2, numero1 - numero2);
            break;

        case '*':
            // Multiplicação
            printf("%.2f * %.2f = %.2f\n", numero1, numero2, numero1 * numero2);
            break;

        case '/':
            // Verificação de divisão por zero
            if (numero2 == 0) {
                printf("Erro: nao e possivel dividir por zero.\n");
            } else {
                printf("%.2f / %.2f = %.2f\n", numero1, numero2, numero1 / numero2);
            }
            break;

        default:
            // Caso usuário digite operação inválida
            printf("Operacao invalida.\n");
            break;
    }

    return 0;
}
