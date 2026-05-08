/*
============================================================================
Autor: Matheus da Silva Cezar
Descrição:
Programa em C que lê um número inteiro não negativo e gera um novo
valor inteiro contendo os mesmos dígitos do valor lido, porém em ordem
inversa. (Exemplo: lido 235, o resultado deve ser 532).

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
Função: inverterNumero
Descrição:
Recebe um número inteiro, extrai seus dígitos de trás para frente e
constrói um novo número com a ordem invertida.

Parâmetros:
- numero : valor inteiro a ser invertido

Retorno:
- O novo número com os dígitos em ordem inversa
============================================================================
*/
int inverterNumero(int numero) {
    int invertido = 0; // Extremamente importante inicializar com 0
    int resto;

    // Enquanto houver dígitos para processar
    while (numero > 0) {
        resto = numero % 10;                     // Extrai o último dígito
        invertido = (invertido * 10) + resto;    // "Empurra" o dígito para a esquerda e adiciona o novo
        numero /= 10;                            // Remove o último dígito do número original
    }

    return invertido;
}

/*
============================================================================
Função principal
============================================================================
*/
int main(void) {
    int numeroOriginal;
    int numeroInvertido;

    printf("=== INVERSAO DE DIGITOS ===\n\n");

    printf("Digite um valor inteiro nao negativo: ");
    scanf("%d", &numeroOriginal);

    // Validação de segurança: o enunciado pede um número não negativo
    if (numeroOriginal < 0) {
        printf("\nErro: O programa aceita apenas numeros inteiros nao negativos.\n");
        return 1; // Encerra o programa com código de erro
    }

    // Chamada da função para inverter o número
    numeroInvertido = inverterNumero(numeroOriginal);

    // Exibição do resultado
    printf("\nNumero original: %d\n", numeroOriginal);
    printf("Numero invertido: %d\n", numeroInvertido);

    return 0;
}
