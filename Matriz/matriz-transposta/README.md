# O Espelho (Matriz Transposta)

Programa em linguagem C que realiza a transposição de uma matriz retangular. O usuário preenche uma matriz original (Matriz A) de dimensões 2x3, e o programa calcula e exibe a sua Matriz Transposta (Matriz B), que assume as dimensões inversas (3x2).

## Funcionalidades

- Leitura de matrizes retangulares (onde número de linhas é diferente do número de colunas).
- Lógica de transposição: o elemento da linha `i` e coluna `j` da original é copiado para a linha `j` e coluna `i` da transposta.
- Exibição em formato de grade (`grid`) com alinhamento de caracteres para fácil visualização geométrica.

## Conceitos Aplicados

- **Álgebra Linear aplicada à Computação**.
- **Matrizes Retangulares** em C.
- Manipulação de índices bidimensionais de tamanhos assimétricos.
- Funções modulares especializadas em processamento e renderização de matrizes.

## Como Compilar

Utilizando GCC:

```bash
gcc main.c -o programa
```

## Como Executar

Linux/macOS:

```bash
./programa
```

Windows:

```bash
programa.exe
```

## Exemplo de Execução

```text
=== O ESPELHO: MATRIZ TRANSPOSTA ===

Digite os 6 valores para preencher a matriz A (2x3):
Elemento [0][0]: 1
Elemento [0][1]: 2
Elemento [0][2]: 3
Elemento [1][0]: 4
Elemento [1][1]: 5
Elemento [1][2]: 6

--- Matriz A (Original 2x3) ---
  1   2   3 
  4   5   6 

--- Matriz B (Transposta 3x2) ---
  1   4 
  2   5 
  3   6
```

## Autor

Matheus da Silva Cezar