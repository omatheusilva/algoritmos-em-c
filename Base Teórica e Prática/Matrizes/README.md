# Matrizes (Arrays Bidimensionais) em C 🧮

Esta pasta contém algoritmos avançados para manipulação de Matrizes (Arrays Bidimensionais). O foco aqui é aprender a projetar e varrer estruturas de dados em formato de grade (tabelas, tabuleiros), dominando a lógica de laços de repetição aninhados e o sistema de coordenadas de linhas e colunas.

## 🧠 Conceitos Fundamentais

Abaixo estão os pilares teóricos exigidos para compreender os códigos desta seção, detalhados com exemplos práticos:

📂 Conteúdos Abordados

1. **Preenchimento e Exibição**: Interação bidimensional com o usuário para montagem de matrizes na memória.

2. **Busca Bidimensional**: Identificação do maior/menor elemento e suas respectivas coordenadas (linha e coluna).

3. **Matemática de Índices**: Cálculos diretos para soma de diagonais (Principal e Secundária).

4. **Varreduras Direcionais**: Cálculos independentes de linhas (ex: média de um aluno) e colunas (ex: média de uma prova).

5. **Jogos Clássicos**: Implementação de lógica condicional múltipla e "Early Return" no validador de Jogo da Velha (Tic-Tac-Toe).

6. **Modularização Básica**: Uso de funções `void` e `char` para manter a função `main` limpa (Clean Code), substituindo a necessidade de ponteiros complexos por retornos diretos.

Modularização Básica: Uso de funções void e char para manter a função main limpa (Clean Code), substituindo a necessidade de ponteiros complexos por retornos diretos.

### 1. Declaração e Inicialização
Uma matriz pode ser vista como um "vetor de vetores". Para criá-la, precisamos informar duas dimensões: primeiro a quantidade de **linhas**, depois a quantidade de **colunas**.

**Exemplo Prático:**
```c
// Declara uma matriz vazia com 3 linhas e 3 colunas
int tabuleiro[3][3];

// Declara e inicializa uma matriz 2x3 (2 linhas, 3 colunas)
int notas[2][3] = {
    {7, 8, 9}, // Valores da Linha 0
    {5, 6, 7}  // Valores da Linha 1
};
```

### 2. Acesso via Coordenadas

Assim como nos vetores unidimensionais, a contagem dos índices sempre começa no `0`. Para acessar ou alterar um valor, você precisa fornecer a coordenada exata: `matriz[linha][coluna]`.

**Exemplo Prático:**
```c
int matriz[2][2] = {
    {10, 20},
    {30, 40}
};

printf("O valor na linha 1, coluna 0 e: %d\n", matriz[1][0]); // Imprime 30
```

### 3. Laços Aninhados (Nested Loops)

Para percorrer uma matriz inteira, precisamos de um laço de repetição dentro de outro. O laço "de fora" geralmente controla as linhas, enquanto o laço "de dentro" passeia por todas as colunas daquela linha antes de descer para a próxima.

**Exemplo Prático:**
```c
int matriz[2][3] = {{1, 2, 3}, {4, 5, 6}};

// i controla a linha, j controla a coluna
for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
        printf("%d ", matriz[i][j]);
    }
    printf("\n"); // Quebra a linha ao terminar as colunas
}
```

### 4. Varredura Alternada: Linhas vs. Colunas

A ordem em que lemos a matriz muda tudo. Se fixarmos o índice da linha no laço externo, varremos a matriz horizontalmente. Se invertermos e colocarmos a coluna no laço externo, varremos a matriz verticalmente.
Essa é a lógica principal do algoritmo de "Boletim Escolar".

**Exemplo Prático (Soma de uma coluna específica):**
```c
int somaColuna = 0;
int colunaAlvo = 1; // Queremos somar tudo que está na coluna 1

// Note que o laço percorre as linhas, mas a coluna fica travada em '1'
for (int linha = 0; linha < 2; linha++) {
    somaColuna += matriz[linha][colunaAlvo]; 
}
```

### 5. Lógica de Diagonais (Matrizes Quadradas)

Em matrizes onde o número de linhas é igual ao de colunas (ex: 3x3, 5x5), podemos encontrar as diagonais usando pura matemática nos índices, sem precisar varrer a matriz inteira.

* **Diagonal Principal**: A linha é igual à coluna (`i == i`).

* **Diagonal Secundária**: A coluna decresce enquanto a linha aumenta (`Tamanho - 1 - i`)

**Exemplo Prático:**
```c
#define TAMANHO 3
int matriz[TAMANHO][TAMANHO] = {{1,2,3}, {4,5,6}, {7,8,9}};

for (int i = 0; i < TAMANHO; i++) {
    printf("Principal: %d\n", matriz[i][i]);
    printf("Secundaria: %d\n", matriz[i][TAMANHO - 1 - i]);
}
```

## Autor

Matheus da Silva Cezar
