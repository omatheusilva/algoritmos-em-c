# Multiplicação de Matrizes

Este algoritmo processa duas matrizes quadradas de ordem 4 ($4 \times 4$) lidas via teclado e efetua a operação algébrica de multiplicação matricial, gerando e exibindo uma matriz resultante $R$.

## 🧠 Conceitos Fundamentais

**Álgebra Linear (Produto de Matrizes):**
A multiplicação de duas matrizes não ocorre elemento por elemento (como na soma). O elemento $R_{ij}$ da matriz resultante é calculado realizando o produto escalar da $i$-ésima linha da matriz $A$ pela $j$-ésima coluna da matriz $B$.
O equacionamento matemático da operação é:
$R_{ij} = \sum_{k=1}^{n} A_{ik} \cdot B_{kj}$

**Complexidade Computacional ($O(N^3)$):**
Para implementar a equação acima na linguagem C, o algoritmo exige o aninhamento de três laços de repetição `for`.
* O iterador `i` fixa a linha da Matriz A.
* O iterador `j` fixa a coluna da Matriz B.
* O iterador interno `k` atua como o cursor que varre os elementos multiplicando as posições equivalentes e acumulando na coordenada atual de `R`.

## 🚀 Como Executar

1. Registre o executável no seu `CMakeLists.txt` principal:
   ```cmake
   add_executable(multiplicacao_matrizes Matrizes/multiplicacao-matrizes/main.c)

## Exemplo de Execução

```text
=== MULTIPLICACAO DE MATRIZES 4x4 ===

--- PREENCHIMENTO DA MATRIZ A ---
Digite o valor da posicao A[0][0]: 1
(...)

--- PREENCHIMENTO DA MATRIZ B ---
Digite o valor da posicao B[0][0]: 2
(...)

--- Matriz Resultante (A * B) ---
  14   14   14   14 
  30   30   30   30 
  14   14   14   14 
  30   30   30   30
```
## Autor

Matheus da Silva Cezar