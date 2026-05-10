# Multiplicação de Matriz por Escalar

Este programa em C demonstra como realizar uma operação de multiplicação escalar em uma matriz 3x3. O usuário fornece os valores da matriz e um número inteiro $X$, e o programa transforma cada elemento $a_{ij}$ da matriz em $a_{ij} \times X$.

## 🧠 Conceitos Fundamentais

Neste exercício, aplicamos os seguintes conceitos de programação e matemática:

1. **Multiplicação Escalar:** Na matemática, multiplicar uma matriz por um escalar significa multiplicar cada um de seus componentes por esse número.
2. **Reutilização de Código:** Criamos uma função `exibirMatriz` que é chamada duas vezes (antes e depois do processamento), evitando a repetição de laços `for` desnecessários no `main`.
3. **Passagem de Parâmetros:** A matriz é passada para as funções como referência, permitindo que a função `multiplicarMatriz` altere os valores originais diretamente na memória.

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
=== MULTIPLICACAO DE MATRIZ POR ESCALAR ===

Posicao [1][1]: 1
Posicao [1][2]: 2
(...)
Digite o valor do multiplicador (X): 5

Matriz Inicial:
   1    2    3 
   4    5    6 
   7    8    9 

Matriz Multiplicada por 5:
   5   10   15 
  20   25   30 
  35   40   45
```

## Autor

Matheus da Silva Cezar