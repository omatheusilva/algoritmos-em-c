/*
============================================================================
Autor: Matheus da Silva Cezar
Descrição:
Programa em C que lê dois valores inteiros, k e n, e calcula a expressão:
S = k * 1 + (k+1) * 2 + (k+2) * 3 + ... + (k+n) * (n+1).

Objetivos:
- Praticar tradução de fórmulas matemáticas para código
- Utilizar funções
- Trabalhar com laços de repetição (for)
- Aplicar boas práticas de programação e validação de dados

============================================================================
*/

#include <stdio.h>

/*
============================================================================
Função: calcularSerieMatematica
Descrição:
Calcula a somatória da série matemática com base nos valores de K e N.

Parâmetros:
- k : valor base inicial da série
- n : número que determina o limite de iterações da série

Retorno:
- O resultado (S) do cálculo da série
============================================================================
*/
int calcularSerieMatematica(int k, int n) {
    int soma = 0;

    // O laço vai de 0 até n, replicando exatamente os termos da fórmula matemática.
    // Na iteração 0, o termo calculado é: (k + 0) * (0 + 1) = k * 1
    // Na iteração n, o termo calculado é: (k + n) * (n + 1)
    for (int iteracao = 0; iteracao <= n; iteracao++) {
        soma += (k + iteracao) * (iteracao + 1);
    }

    return soma;
}

/*
============================================================================
Função principal
============================================================================
*/
int main(void) {
    int k, n;
    int resultadoS;

    printf("=== CALCULO DE SERIE MATEMATICA ===\n\n");

    printf("Digite o valor de K: ");
    scanf("%d", &k);

    printf("Digite o valor de N (nao negativo): ");
    scanf("%d", &n);

    // Validação de segurança para garantir a execução correta da série
    if (n < 0) {
        printf("\nErro: O valor de N deve ser maior ou igual a zero.\n");
        return 1; // Encerra o programa com código de erro
    }

    // Chamada da função para calcular o valor de S
    resultadoS = calcularSerieMatematica(k, n);

    // Exibição do resultado
    printf("\nO valor final da serie S eh: %d\n", resultadoS);

    return 0;
}
