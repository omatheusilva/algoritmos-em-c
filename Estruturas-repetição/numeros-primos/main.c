/*
============================================================================
Autor: Matheus da Silva Cezar
Descrição:
Programa em C que lê um número informado pelo usuário e verifica se
ele é um número primo. (Lembrando que números primos são naturais
maiores que 1, e possuem apenas dois divisores: 1 e ele mesmo).

Objetivos:
- Praticar lógica matemática aplicada à programação
- Utilizar funções com retorno Booleano (0 ou 1)
- Trabalhar com laços de repetição (for) otimizados
- Aplicar o operador módulo (%) para encontrar divisores

============================================================================
*/

#include <stdio.h>

/*
============================================================================
Função: verificarPrimo
Descrição:
Recebe um número inteiro e verifica matematicamente se ele é primo.
A função é otimizada para interromper o laço assim que encontrar um divisor.

Parâmetros:
- numero : valor inteiro a ser analisado

Retorno:
- 1 (Verdadeiro) se for primo, 0 (Falso) se não for
============================================================================
*/
int verificarPrimo(int numero) {
    // Validação inicial: números menores ou iguais a 1 não são primos
    if (numero <= 1) {
        return 0;
    }

    // Tenta dividir o número por todos os valores a partir do 2 até a metade dele.
    // Se encontrar qualquer divisão exata, sabemos imediatamente que não é primo.
    for (int i = 2; i <= numero / 2; i++) {
        if (numero % i == 0) {
            return 0;
        }
    }

    // Se o laço terminar sem encontrar nenhum divisor, o número é primo
    return 1;
}

/*
============================================================================
Função principal
============================================================================
*/
int main(void) {
    int valorLido;

    printf("=== VERIFICADOR DE NUMEROS PRIMOS ===\n\n");

    printf("Digite um numero inteiro: ");
    scanf("%d", &valorLido);

    // Chama a função e analisa o retorno
    if (verificarPrimo(valorLido)) {
        printf("\nO numero %d EH PRIMO.\n", valorLido);
    } else {
        printf("\nO numero %d NAO eh primo.\n", valorLido);
    }

    return 0;
}
