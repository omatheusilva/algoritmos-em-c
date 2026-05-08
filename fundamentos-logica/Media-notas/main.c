/*
============================================================================
Autor: Matheus da Silva Cezar
Descrição:
Programa em C que calcula a média de um aluno com base em duas notas.
Caso a média seja inferior a 7,0, o aluno realiza um exame e uma nova média
é calculada para determinar aprovação ou reprovação.
============================================================================
*/

#include <stdio.h>

int main(void) {

    // Variáveis para armazenar as notas e médias
    float nota1, nota2, media, notaExame;

    // Exibe título do sistema
    printf("=== SISTEMA DE APROVACAO DE ALUNOS ===\n\n");

    // Entrada da primeira nota
    printf("Digite a nota 1: ");
    scanf("%f", &nota1);

    // Entrada da segunda nota
    printf("Digite a nota 2: ");
    scanf("%f", &nota2);

    // Calcula a média inicial das duas notas
    media = (nota1 + nota2) / 2.0;

    // Verifica se o aluno foi aprovado direto
    if (media >= 7.0) {

        // Caso a média seja suficiente, aluno é aprovado direto
        printf("\nAprovado com media: %.2f\n", media);

    } else {

        // Caso a média seja menor que 7, o aluno faz exame
        printf("\nMedia insuficiente (%.2f).\n", media);
        printf("Digite a nota do exame: ");
        scanf("%f", &notaExame);

        // Recalcula a média final incluindo o exame
        media = (media + notaExame) / 2.0;

        // Verifica aprovação ou reprovação após exame
        if (media >= 5.0) {

            // Aprovado após exame
            printf("Aprovado com media final: %.2f\n", media);

        } else {

            // Reprovado após exame
            printf("Reprovado com media final: %.2f\n", media);
        }
    }

    // Finaliza o programa corretamente
    return 0;
}
