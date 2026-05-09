/*
============================================================================
Autor: Matheus da Silva Cezar
Descrição:
Programa em C que simula um boletim escolar usando uma matriz 4x3.
Lê as notas digitadas pelo usuário, calcula a média individual de cada
aluno (soma das linhas) e a média geral da turma em cada prova (soma das colunas).

Objetivos:
- Preenchimento interativo de matrizes.
- Percorrer matrizes por linhas (Row-major order).
- Percorrer matrizes por colunas (Column-major order).
- Utilizar funções void simples.
============================================================================
*/

#include <stdio.h>

// Definindo constantes para os tamanhos para facilitar manutenções futuras
#define ALUNOS 4
#define PROVAS 3

/*
============================================================================
Função: lerNotas
Descrição:
Pede ao usuário para digitar as notas de cada prova para cada aluno.
============================================================================
*/
void lerNotas(int matriz[ALUNOS][PROVAS]) {
    for (int linha = 0; linha < ALUNOS; linha++) {
        printf("\n--- Digite as notas do Aluno %d ---\n", linha + 1);
        for (int coluna = 0; coluna < PROVAS; coluna++) {
            printf("Nota da Prova %d: ", coluna + 1);
            scanf("%d", &matriz[linha][coluna]);
        }
    }
}

/*
============================================================================
Função: calcularEImprimirMediasAlunos
Descrição:
Fixa uma linha (um aluno) e soma todas as colunas (suas provas).
============================================================================
*/
void calcularEImprimirMediasAlunos(int matriz[ALUNOS][PROVAS]) {
    float mediaAlunos[ALUNOS];

    printf("\n=== RESULTADOS ===\n");
    printf("\n--- Media das notas dos alunos ---\n");

    for (int linha = 0; linha < ALUNOS; linha++) {
        int soma = 0;
        for (int coluna = 0; coluna < PROVAS; coluna++) {
            soma += matriz[linha][coluna];
        }
        // Conversão explícita para float para evitar perda de casas decimais
        mediaAlunos[linha] = soma / (float)PROVAS;
        printf("Aluno %d: %.2f\n", linha + 1, mediaAlunos[linha]);
    }
}

/*
============================================================================
Função: calcularEImprimirMediasProvas
Descrição:
Fixa uma coluna (uma prova) e soma todas as linhas (notas de todos os alunos).
============================================================================
*/
void calcularEImprimirMediasProvas(int matriz[ALUNOS][PROVAS]) {
    float mediaProvas[PROVAS];

    printf("\n--- Media das provas da turma ---\n");

    for (int coluna = 0; coluna < PROVAS; coluna++) {
        int soma = 0;
        for (int linha = 0; linha < ALUNOS; linha++) {
            soma += matriz[linha][coluna];
        }
        mediaProvas[coluna] = soma / (float)ALUNOS;
        printf("Prova %d: %.2f\n", coluna + 1, mediaProvas[coluna]);
    }
}

/*
============================================================================
Função principal
============================================================================
*/
int main(void) {
    int notas[ALUNOS][PROVAS]; // Declaração sem inicialização prévia

    printf("=== BOLETIM ESCOLAR (MATRIZ %dx%d) ===\n", ALUNOS, PROVAS);

    // Chamando as funções na ordem lógica do programa
    lerNotas(notas);
    calcularEImprimirMediasAlunos(notas);
    calcularEImprimirMediasProvas(notas);

    return 0;
}
