/*
============================================================================
Autor: Matheus da Silva Cezar
Descrição:
Programa em C que valida o estado de um tabuleiro de Jogo da Velha (3x3).
Verifica linhas, colunas e diagonais para determinar se o Jogador 1 ('X'),
o Jogador 2 ('O') venceu a partida, ou se o jogo segue em aberto/empate.

Objetivos:
- Trabalhar com matrizes de caracteres (char).
- Aplicar o conceito de "Early Return" em funções lógicas.
- Separar a lógica de renderização visual da lógica de processamento.
============================================================================
*/

#include <stdio.h>

#define TAMANHO 3

/*
============================================================================
Função: desenharTabuleiro
Descrição:
Imprime a matriz com uma formatação amigável para simular um tabuleiro real.
============================================================================
*/
void desenharTabuleiro(char tabuleiro[TAMANHO][TAMANHO]) {
    printf("\n--- TABULEIRO ---\n");
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            printf(" %c ", tabuleiro[i][j]);
            if (j < TAMANHO - 1) printf("|"); // Divisória de colunas
        }
        printf("\n");
        if (i < TAMANHO - 1) printf("---|---|---\n"); // Divisória de linhas
    }
    printf("-----------------\n\n");
}

/*
============================================================================
Função: verificarVencedor
Descrição:
Verifica todas as condições de vitória. Utiliza o conceito de retorno 
antecipado: assim que acha um vencedor, retorna o caractere dele ('X' ou 'O').
Se ninguém venceu, retorna '-'.
============================================================================
*/
char verificarVencedor(char tabuleiro[TAMANHO][TAMANHO]) {
    
    // 1. Verificar Linhas
    for (int i = 0; i < TAMANHO; i++) {
        if (tabuleiro[i][0] == tabuleiro[i][1] && 
            tabuleiro[i][1] == tabuleiro[i][2] && 
            tabuleiro[i][0] != '-') {
            return tabuleiro[i][0]; // Retorna quem estava na linha
        }
    }

    // 2. Verificar Colunas
    for (int i = 0; i < TAMANHO; i++) {
        if (tabuleiro[0][i] == tabuleiro[1][i] && 
            tabuleiro[1][i] == tabuleiro[2][i] && 
            tabuleiro[0][i] != '-') {
            return tabuleiro[0][i]; // Retorna quem estava na coluna
        }
    }

    // 3. Verificar Diagonal Principal
    if (tabuleiro[0][0] == tabuleiro[1][1] && 
        tabuleiro[1][1] == tabuleiro[2][2] && 
        tabuleiro[0][0] != '-') {
        return tabuleiro[0][0];
    }

    // 4. Verificar Diagonal Secundária
    if (tabuleiro[0][2] == tabuleiro[1][1] && 
        tabuleiro[1][1] == tabuleiro[2][0] && 
        tabuleiro[0][2] != '-') {
        return tabuleiro[0][2];
    }

    // Se passou por tudo e não deu return, não há vencedor ainda
    return '-';
}

/*
============================================================================
Função principal
============================================================================
*/
int main(void) {
    // Matriz inicializada com um cenário onde 'X' ganha na diagonal secundária
    char tabuleiro[TAMANHO][TAMANHO] = {
        {'-', '-', 'X'},
        {'-', 'X', '-'},
        {'X', '-', '-'}
    };

    printf("=== VALIDADOR DE JOGO DA VELHA ===\n");

    // 1. Exibir o estado atual do jogo
    desenharTabuleiro(tabuleiro);

    // 2. Processamento: capturar o resultado da análise
    char resultado = verificarVencedor(tabuleiro);

    // 3. Exibir quem ganhou de forma condicional
    if (resultado == 'X') {
        printf("Resultado: Jogador 1 (X) venceu!\n");
    } else if (resultado == 'O') {
        printf("Resultado: Jogador 2 (O) venceu!\n");
    } else {
        printf("Resultado: Empate ou jogo ainda em andamento!\n");
    }

    return 0;
}