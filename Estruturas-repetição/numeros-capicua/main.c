/*
============================================================================
Autor: Matheus da Silva Cezar
Descrição:
Programa em C que encontra e mostra todos os números entre 10 e 9999 
que são "capicua" (a sequência de algarismos permanece a mesma se lida 
na ordem direta ou inversa, como 33, 272, 4884).

Objetivos:
- Praticar lógica matemática aplicada à programação
- Utilizar funções e reaproveitamento de código
- Trabalhar com laços de repetição (for e while)
- Aplicar operadores matemáticos para manipulação de dígitos

============================================================================
*/

#include <stdio.h>

/*
============================================================================
Função: inverterNumero
Descrição:
Recebe um número inteiro e constrói um novo número com a ordem invertida
dos dígitos. Função base para verificar se um número é capicua.

Parâmetros:
- numero : valor inteiro a ser invertido

Retorno:
- O novo número com os dígitos em ordem inversa
============================================================================
*/
int inverterNumero(int numero) {
    int invertido = 0;
    int resto;

    while (numero > 0) {
        resto = numero % 10;
        invertido = (invertido * 10) + resto;
        numero /= 10;
    }

    return invertido;
}

/*
============================================================================
Função: verificarCapicua
Descrição:
Compara o número original com sua versão invertida.

Parâmetros:
- numero : valor inteiro a ser analisado

Retorno:
- 1 (Verdadeiro) se for capicua, 0 (Falso) se não for
============================================================================
*/
int verificarCapicua(int numero) {
    if (numero == inverterNumero(numero)) {
        return 1;
    }
    return 0;
}

/*
============================================================================
Função: buscarCapicuasNoIntervalo
Descrição:
Percorre um intervalo numérico e imprime na tela todos os números capicuas
encontrados.

Parâmetros:
- inicio : valor inicial do intervalo
- fim    : valor final do intervalo
============================================================================
*/
void buscarCapicuasNoIntervalo(int inicio, int fim) {
    printf("Numeros capicuas entre %d e %d:\n\n", inicio, fim);
    
    int contadorLinha = 0; // Utilizado apenas para organizar a quebra de linha no terminal

    for (int i = inicio; i <= fim; i++) {
        if (verificarCapicua(i)) {
            printf("%4d\t", i); // Imprime com uma tabulação para ficar alinhado
            contadorLinha++;
            
            // Quebra a linha a cada 10 números impressos para o terminal não ficar poluído
            if (contadorLinha % 10 == 0) {
                printf("\n");
            }
        }
    }
    printf("\n");
}

/*
============================================================================
Função principal
============================================================================
*/
int main(void) {
    printf("=== BUSCA DE NUMEROS CAPICUAS ===\n\n");

    // Chama a função definindo o intervalo solicitado no enunciado
    buscarCapicuasNoIntervalo(10, 9999);

    return 0;
}