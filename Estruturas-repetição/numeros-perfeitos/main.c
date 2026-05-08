/*
============================================================================
Autor: Matheus da Silva Cezar
Descrição:
Programa em C que identifica e mostra na tela todos os "números perfeitos" 
(números cuja soma dos divisores, exceto ele mesmo, é igual ao próprio número) 
no intervalo entre 1 e 100.

Objetivos:
- Praticar lógica matemática aplicada à programação
- Utilizar funções modulares
- Trabalhar com laços de repetição aninhados
- Aplicar o operador módulo (%) para encontrar divisores

============================================================================
*/

#include <stdio.h>

/*
============================================================================
Função: verificarNumeroPerfeito
Descrição:
Verifica se um número passado como parâmetro é um número perfeito.

Parâmetros:
- numero : valor inteiro a ser analisado

Retorno:
- 1 (Verdadeiro) se for perfeito, 0 (Falso) se não for
============================================================================
*/
int verificarNumeroPerfeito(int numero) {
    int somaDivisores = 0;

    // Encontra os divisores do número (excluindo ele mesmo) e os soma
    for (int i = 1; i < numero; i++) {
        if (numero % i == 0) {
            somaDivisores += i;
        }
    }

    // Retorna 1 se a soma dos divisores for igual ao número, caso contrário 0
    if (somaDivisores == numero) {
        return 1;
    }
    
    return 0;
}

/*
============================================================================
Função: buscarPerfeitosNoIntervalo
Descrição:
Percorre um intervalo de 1 até o limite informado e imprime os números perfeitos.

Parâmetros:
- limite : valor máximo do intervalo de busca
============================================================================
*/
void buscarPerfeitosNoIntervalo(int limite) {
    printf("Numeros perfeitos entre 1 e %d:\n", limite);
    
    for (int n = 1; n <= limite; n++) {
        if (verificarNumeroPerfeito(n)) {
            printf("- %d eh perfeito\n", n);
        }
    }
}

/*
============================================================================
Função principal
============================================================================
*/
int main(void) {
    int limite = 100;

    printf("=== BUSCA DE NUMEROS PERFEITOS ===\n\n");

    // Chama a função para buscar e exibir os números perfeitos até o limite
    buscarPerfeitosNoIntervalo(limite);

    return 0;
}