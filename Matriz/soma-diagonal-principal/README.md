# Somatório da Diagonal Principal em Matriz

Este programa lê valores para preencher uma matriz quadrada (5x5) e calcula a soma exclusiva dos elementos que pertencem à **Diagonal Principal**.



## 🧠 Conceitos Fundamentais

Em Álgebra Linear, a diagonal principal de uma matriz quadrada é composta por todos os elementos onde o índice da linha é exatamente igual ao índice da coluna ($i = j$).

**Otimização Extrema ($O(N)$):**
A abordagem ingênua para resolver esse problema seria usar dois laços de repetição aninhados (varrendo todas as 25 posições) e testar `if (i == j)`. No entanto, este algoritmo utiliza uma abordagem direta: apenas um laço `for` é utilizado, iterando de $0$ até o tamanho da matriz, acessando diretamente a coordenada `matriz[i][i]`. Isso reduz drasticamente as operações matemáticas do processador.

## 🚀 Como Executar

1. Adicione o executável ao arquivo `CMakeLists.txt` na raiz do seu projeto:
   ```cmake
   add_executable(diagonal_principal Matrizes/soma-diagonal-principal/main.c)

## Exemplo de Execução

```text
=== SOMA DA DIAGONAL PRINCIPAL ===

--- PREENCHIMENTO DA MATRIZ 5x5 ---
Digite o numero da posicao [1][1]: 1
Digite o numero da posicao [1][2]: 2
(...)

Matriz Digitada:
  1   2   3   4   5 
  6   7   8   9   0 
  1   2   3   4   5 
  6   7   8   9   0 
  1   2   3   4   5 

--- RESULTADOS ---
Somatorio da diagonal principal: 24
```

## Autor

Matheus da Silva Cezar