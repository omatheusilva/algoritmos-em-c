# Soma de Matrizes

Este programa realiza a adição escalar de duas matrizes bidimensionais do mesmo tamanho. Ele lê iterativamente os valores para as matrizes $A$ e $B$, realiza o cálculo e armazena os resultados em uma terceira estrutura de dados, garantindo que as matrizes originais permaneçam inalteradas na memória.

## 🧠 Conceitos Fundamentais

**Reutilização de Código (DRY):**
Ao contrário de scripts lineares que duplicam blocos de código (`for`) para ler múltiplas matrizes, este projeto adota uma abordagem modular. A função `lerMatriz` recebe o identificador (`char nome`) por parâmetro, permitindo que a mesma lógica seja acionada diversas vezes. Isso facilita a manutenção e escalabilidade (caso fosse necessário ler 10 matrizes diferentes, o código não precisaria crescer).

**Álgebra Linear (Adição de Matrizes):**
A operação matemática obedece à regra de adição de matrizes de mesma ordem. Cada elemento da matriz resultante $C$ é obtido pela soma dos elementos correspondentes nas matrizes originais, ou seja:
$c_{ij} = a_{ij} + b_{ij}$

## 🚀 Como Executar

1. Registre o executável no seu `CMakeLists.txt` principal:
   ```cmake
   add_executable(soma_duas_matrizes Matrizes/soma-duas-matrizes/main.c)

## Exemplo de Execução

```text
=== SOMA DE MATRIZES 3x3 ===

--- PREENCHIMENTO DA MATRIZ A ---
Digite o valor da posicao A[0][0]: 1
Digite o valor da posicao A[0][1]: 2
(...)

--- PREENCHIMENTO DA MATRIZ B ---
Digite o valor da posicao B[0][0]: 5
Digite o valor da posicao B[0][1]: 5
(...)

--- RESULTADO DA SOMA (A + B = SOMA) ---
Posicao [0][0]:   1 + 5 = 6
Posicao [0][1]:   2 + 5 = 7
```

## Autor

Matheus da Silva Cezar