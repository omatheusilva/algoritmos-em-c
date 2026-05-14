# Somatório da Diagonal Secundária em Matriz

Este programa lê valores numéricos para construir uma matriz quadrada (5x5) e calcula a soma dos elementos presentes na **Diagonal Secundária** (a reta que cruza a matriz do canto superior direito até o canto inferior esquerdo).



## 🧠 Conceitos Fundamentais

Em Álgebra Linear, os elementos da diagonal secundária de uma matriz de tamanho $N$ possuem uma relação matemática rígida: a soma do índice da linha com o índice da coluna é sempre igual a $N - 1$ (ou seja, $i + j = N - 1$).

**Técnica de Duplo Iterador ($O(N)$):**
Em vez de aninhar dois laços de repetição (o que geraria 25 ciclos de processamento), a linguagem C nos permite inicializar e iterar duas variáveis diferentes na mesma instrução `for`.
* A variável `i` (linha) começa no topo da matriz e desce (`i++`).
* A variável `j` (coluna) começa na extrema direita da matriz e vai para a esquerda (`j--`).
  Assim, a matriz inteira é resolvida com apenas 5 iterações cirúrgicas.

## 🚀 Como Executar

1. Adicione o programa ao arquivo `CMakeLists.txt` na raiz:
   ```cmake
   add_executable(diagonal_secundaria Matrizes/soma-diagonal-secundaria/main.c)

## Exemplo de Execução

```text
=== SOMA DA DIAGONAL SECUNDARIA ===

--- PREENCHIMENTO DA MATRIZ 5x5 ---
Digite o numero da posicao [1][1]: 1
(...)

Matriz Digitada:
  1   2   3   4   5 
  6   7   8   9   0 
  1   2   3   4   5 
  6   7   8   9   0 
  1   2   3   4   5 

--- RESULTADOS ---
Somatorio da diagonal secundaria: 25
```
## Autor

Matheus da Silva Cezar