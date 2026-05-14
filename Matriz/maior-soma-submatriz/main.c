/*
============================================================================
Autor: Matheus da Silva Cezar
Descrição:
Programa que lê uma matriz 5x5 e encontra a submatriz NxN (definida pelo 
usuário) que possui o maior somatório entre seus elementos.

Objetivos:
- Algoritmo de "Janela Deslizante" (Sliding Window) em 2D.
- Uso de 4 laços de repetição aninhados.
- Processamento e exibição contidos na mesma função (evitando ponteiros).
- Validação de entrada de dados.
============================================================================
*/

#include <stdio.h>
#include <limits.h> // Para usar INT_MIN

#define TAMANHO 5

// Protótipos das funções
void lerMatriz(int matriz[TAMANHO][TAMANHO]);
void exibirMatriz(int matriz[TAMANHO][TAMANHO]);
void calcularEExibirMaiorSubmatriz(int matriz[TAMANHO][TAMANHO], int n);

int main(void) {
    int matriz[TAMANHO][TAMANHO];
    int n;

    printf("=== MAIOR SOMATORIO EM SUBMATRIZ NxN ===\n\n");

    // 1. Entrada da Matriz
    lerMatriz(matriz);

    // 2. Entrada e Validação do tamanho N
    do {
        printf("\nDigite o tamanho da submatriz (N) [1 a %d]: ", TAMANHO);
        scanf("%d", &n);
        if (n < 1 || n > TAMANHO) {
            printf("[ERRO] Tamanho invalido. Tente novamente.\n");
        }
    } while (n < 1 || n > TAMANHO);

    // 3. Exibição para conferência
    printf("\nMatriz Digitada:\n");
    exibirMatriz(matriz);

    // 4. Processamento e Saída de dados (A função resolve tudo)
    calcularEExibirMaiorSubmatriz(matriz, n);

    return 0;
}

void lerMatriz(int matriz[TAMANHO][TAMANHO]) {
    printf("--- PREENCHIMENTO DA MATRIZ %dx%d ---\n", TAMANHO, TAMANHO);
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            printf("Digite o numero da posicao [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void exibirMatriz(int matriz[TAMANHO][TAMANHO]) {
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }
}

// Como não vamos usar ponteiros, a função é do tipo void (não tem return).
// Ela calcula tudo e já imprime o resultado na tela.
void calcularEExibirMaiorSubmatriz(int matriz[TAMANHO][TAMANHO], int n) {
    int maior_soma = INT_MIN;
    int cord_i = 0, cord_j = 0; // Variáveis locais normais

    // Varredura da Janela Deslizante
    for (int i = 0; i <= TAMANHO - n; i++) {
        for (int j = 0; j <= TAMANHO - n; j++) {

            int soma_atual = 0;

            // Calcula a soma da submatriz atual de tamanho NxN
            for (int x = 0; x < n; x++) {
                for (int y = 0; y < n; y++) {
                    soma_atual += matriz[i + x][j + y];
                }
            }

            // Atualiza a maior soma e salva as coordenadas localmente
            if (soma_atual > maior_soma) {
                maior_soma = soma_atual;
                cord_i = i;
                cord_j = j;
            }

        }
    }

    // A própria função cuida de avisar o usuário
    printf("\n--- RESULTADOS ---\n");
    printf("Maior soma encontrada: %d\n", maior_soma);
    // Somamos +1 apenas para a exibição ficar amigável para humanos (linha 1 em vez de 0)
    printf("Coordenada inicial (canto superior esquerdo): [%d][%d]\n", cord_i + 1, cord_j + 1);
}