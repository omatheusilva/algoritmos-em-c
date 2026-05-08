/*
============================================================================
Autor: Matheus da Silva Cezar
Descrição:
Programa em C que calcula o salário de dois professores com base nas horas
trabalhadas e no valor da hora-aula. Em seguida, identifica qual professor
recebe o maior salário.

Objetivos:
- Praticar estruturas condicionais
- Trabalhar com operações matemáticas
- Comparar valores numéricos
============================================================================
*/

#include <stdio.h>

int main(void) {

    // Variáveis para horas trabalhadas e valor da hora de cada professor
    float horasProf1, horasProf2;
    float valorHoraProf1, valorHoraProf2;

    // Variáveis para armazenar o salário total
    float salarioProf1, salarioProf2;

    // Entrada de dados do professor 1
    printf("Horas trabalhadas do professor 1: ");
    scanf("%f", &horasProf1);

    printf("Valor da hora do professor 1: ");
    scanf("%f", &valorHoraProf1);

    // Entrada de dados do professor 2
    printf("Horas trabalhadas do professor 2: ");
    scanf("%f", &horasProf2);

    printf("Valor da hora do professor 2: ");
    scanf("%f", &valorHoraProf2);

    // Cálculo do salário de cada professor
    salarioProf1 = horasProf1 * valorHoraProf1;
    salarioProf2 = horasProf2 * valorHoraProf2;

    // Comparação dos salários
    if (salarioProf1 > salarioProf2) {

        // Professor 1 recebe mais
        printf("\nProfessor 1 recebe mais: R$ %.2f a mais\n",salarioProf1 - salarioProf2);

    } else if (salarioProf2 > salarioProf1) {

        // Professor 2 recebe mais
        printf("\nProfessor 2 recebe mais: R$ %.2f a mais\n",salarioProf2 - salarioProf1);

    } else {

        // Salários iguais
        printf("\nAmbos os professores recebem o mesmo salario: R$ %.2f\n",salarioProf1);
    }

    return 0;
}
