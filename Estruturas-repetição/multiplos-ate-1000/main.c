/*
============================================================================
Autor: Matheus da Silva Cezar
Descrição:
Programa em C que lê um número inteiro n informado pelo usuário e 
mostra na tela todos os valores inteiros entre 1 e 1000 que são 
divisíveis por n, além de exibir a quantidade total encontrada.

Objetivos:
- Praticar lógica de programação
- Utilizar funções
- Trabalhar com laços de repetição e operador módulo (%)
- Aplicar boas práticas de validação de dados

============================================================================
*/

#include <stdio.h>

/*
============================================================================
Função: exibirDivisiveis
Descrição:
Percorre os números de 1 a 1000, imprime aqueles que são divisíveis 
pelo número informado e exibe o total de números encontrados.

Parâmetros:
- divisor : número pelo qual os valores serão divididos
============================================================================
*/
void exibirDivisiveis(int divisor) {
    int quantidade = 0;

    printf("\nNumeros entre 1 e 1000 divisiveis por %d:\n", divisor);
    
    // Utilizando o laço for, já que o intervalo é conhecido (1 a 1000)
    for (int numero = 1; numero <= 1000; numero++) {
        if (numero % divisor == 0) {
            printf("%d ", numero);
            quantidade++;
        }
    }

    printf("\n\nTotal de numeros encontrados: %d\n", quantidade);
}

/*
============================================================================
Função principal
============================================================================
*/
int main(void) {
    int n;

    printf("=== VERIFICADOR DE DIVISIBILIDADE (1 a 1000) ===\n\n");

    printf("Digite um valor inteiro (n): ");
    scanf("%d", &n);

    // Validação de segurança: previne divisão por zero
    if (n == 0) {
        printf("\nErro: Nao eh possivel realizar divisao por zero.\n");
        return 1; // Encerra o programa com código de erro
    }

    // Chamada da função passando o valor absoluto (caso o usuário digite negativo)
    exibirDivisiveis(n);

    return 0;
}