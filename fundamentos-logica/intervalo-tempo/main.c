/*
============================================================================
Autor: Matheus da Silva Cezar
Descrição:
Programa em C que lê dois horários (hora e minuto), converte para minutos
totais e calcula o intervalo entre eles, indicando se é maior, menor ou
igual a 1 hora.

Objetivos:
- Praticar manipulação de tempo
- Trabalhar com conversão de unidades (horas para minutos)
- Utilizar estruturas condicionais
============================================================================
*/

#include <stdio.h>

int main(void) {

    // Variáveis para armazenar horas e minutos dos dois horários
    int hora1, minuto1, hora2, minuto2;

    // Conversão dos horários para minutos totais
    int total1, total2;

    // Entrada do primeiro horário no formato HH:MM
    printf("Digite o primeiro horario (HH:MM): ");
    scanf("%d:%d", &hora1, &minuto1);

    // Entrada do segundo horário no formato HH:MM
    printf("Digite o segundo horario (HH:MM): ");
    scanf("%d:%d", &hora2, &minuto2);

    // Converte horário 1 para minutos totais
    total1 = (hora1 * 60) + minuto1;

    // Converte horário 2 para minutos totais
    total2 = (hora2 * 60) + minuto2;

    // Ajuste caso o segundo horário seja do dia seguinte
    if (total2 < total1) {
        total2 = total2 + (60 * 24);
    }

    // Calcula a diferença entre os horários
    int diferenca = total2 - total1;

    // Verifica o intervalo
    if (diferenca > 60) {
        printf("Intervalo superior a 1 hora\n");
    } else if (diferenca < 60) {
        printf("Intervalo inferior a 1 hora\n");
    } else {
        printf("Intervalo igual a 1 hora\n");
    }

    return 0;
}