# Somatório de Ambas as Diagonais

Este programa processa uma matriz quadrada e calcula o somatório total unindo os elementos da **Diagonal Principal** e da **Diagonal Secundária**, tomando o cuidado matemático de não duplicar a contagem do elemento central em matrizes de tamanho ímpar.

## 🧠 Conceitos Fundamentais

A união das duas diagonais de uma matriz forma um "X" perfeito em sua estrutura bidimensional.

**Otimização e Prevenção de Colisão ($O(N)$):**
Em vez de criar duas funções separadas e somar os resultados (o que processaria o laço duas vezes), este algoritmo resolve as duas retas na mesma passada do laço `for`.

Para matrizes de dimensões ímpares (como 3x3, 5x5, 7x7), as duas diagonais compartilham exatamente o mesmo elemento central. O algoritmo identifica programaticamente este cruzamento verificando se o índice da coluna principal (`i`) é diferente do índice calculado da coluna secundária (`j`). Se eles forem iguais, o programa pula a adição para evitar que o número seja somado em dobro, mantendo a integridade matemática do resultado.

## 🚀 Como Executar

1. Registre o executável no seu `CMakeLists.txt` global:
   ```cmake
   add_executable(soma_ambas_diagonais Matrizes/soma-ambas-diagonais/main.c)

## Exemplo de Execução

```text
=== SOMA DAS DUAS DIAGONAIS ===

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
Soma das duas diagonais (sem repeticao do centro): 37
```

## Autor

Matheus da Silva Cezar