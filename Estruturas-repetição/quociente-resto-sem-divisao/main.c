/*
============================================================================
Autor: Matheus da Silva Cezar
Descrição:
Programa em C que lê dois valores inteiros positivos e calcula 
o quociente e o resto da divisão do primeiro pelo segundo usando 
subtrações sucessivas, sem utilizar os operadores / e %.

Objetivos:
- Praticar lógica de programação
- Utilizar funções
- Trabalhar com laços de repetição (while)
- Aplicar boas práticas de programação

============================================================================
*/

#include <stdio.h>

/*
============================================================================
Função: calcularQuociente
Descrição:
Calcula o quociente da divisão inteira usando subtrações sucessivas.

Parâmetros:
- dividendo : valor a ser dividido (v1)
- divisor   : valor pelo qual o dividendo será dividido (v2)

Retorno:
- O quociente da divisão
============================================================================
*/
int calcularQuociente(int dividendo, int divisor) {
    int quociente = 0;
    
    // Enquanto for possível subtrair o divisor do dividendo
    while (dividendo >= divisor) {
        dividendo = dividendo - divisor;
        quociente++; // Conta quantas vezes a subtração ocorreu
    }
    
    return quociente;
}

/*
============================================================================
Função: calcularResto
Descrição:
Calcula o resto da divisão inteira usando subtrações sucessivas.

Parâmetros:
- dividendo : valor a ser dividido (v1)
- divisor   : valor pelo qual o dividendo será dividido (v2)

Retorno:
- O resto da divisão
============================================================================
*/
int calcularResto(int dividendo, int divisor) {
    // Subtrai o divisor do dividendo até que o valor restante seja menor que o divisor
    while (dividendo >= divisor) {
        dividendo = dividendo - divisor;
    }
    
    // O que sobra é o nosso resto
    return dividendo;
}

/*
============================================================================
Função principal
============================================================================
*/
int main(void) {
    int dividendo, divisor;
    int quociente, resto;

    printf("=== DIVISAO POR SUBTRACOES SUCESSIVAS ===\n\n");

    printf("Digite o valor do dividendo (v1): ");
    scanf("%d", &dividendo);

    printf("Digite o valor do divisor (v2): ");
    scanf("%d", &divisor);

    // Validação de segurança: previne divisão por zero ou uso de números negativos
    if (divisor <= 0 || dividendo < 0) {
        printf("\nErro: A divisao exige um divisor maior que zero e valores positivos.\n");
        return 1; // Encerra o programa com código de erro
    }

    // Chamada das funções
    quociente = calcularQuociente(dividendo, divisor);
    resto = calcularResto(dividendo, divisor);

    // Exibição dos resultados
    printf("\nResultado da divisao de %d por %d:\n", dividendo, divisor);
    printf("Quociente (Valor da /): %d\n", quociente);
    printf("Resto (Valor da %%): %d\n", resto);

    return 0;
}