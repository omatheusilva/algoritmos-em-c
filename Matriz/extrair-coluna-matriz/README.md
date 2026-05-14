# Extração de Coluna de Matriz para Vetor

Este algoritmo lê uma matriz retangular (3x5), exibe seu conteúdo para o usuário e solicita a escolha de uma coluna específica. A partir dessa escolha, o programa extrai todos os elementos da respectiva coluna e os copia para um vetor (array unidimensional) de tamanho equivalente à quantidade de linhas da matriz original.

## 🧠 Conceitos Fundamentais

**Matrizes Não-Quadradas e Transição de Dimensionalidade:**
Diferente dos algoritmos anteriores, este lida com uma matriz de ordem $3 \times 5$. Para extrair uma coluna isolada, o algoritmo mantém o iterador da coluna (`colunaAlvo`) estático e utiliza apenas um laço `for` atrelado ao iterador das linhas (`i`). Os dados lidos são então injetados linearmente na estrutura 1D (`vetor[i]`).

**Validação de Índices (Memory Safety):**
Um princípio crítico em C é não confiar na entrada do usuário para acessos diretos à memória. O programa utiliza um laço `do-while` para assegurar que a coluna solicitada esteja estritamente no intervalo entre `0` e `COLUNAS - 1`. Isso evita falhas de segurança onde o ponteiro da matriz tentaria acessar endereços não alocados (Segmentation Fault).

## 🚀 Como Executar

1. Adicione a rota do executável no seu `CMakeLists.txt`:
   ```cmake
   add_executable(extrair_coluna Matrizes/extrair-coluna-matriz/main.c)

## Exemplo de Execução

```text
=== EXTRACAO DE COLUNA PARA VETOR ===

--- PREENCHIMENTO DA MATRIZ ---
Digite o valor da posicao [0][0]: 1
(...)

--- Matriz Original (3x5) ---
  1   2   3   4   5 
  6   7   8   9   0 
  1   2   3   4   5 

Digite o indice da coluna que deseja extrair (0 a 4): 8
[ERRO] Indice invalido! A matriz so possui colunas de 0 a 4.
Digite o indice da coluna que deseja extrair (0 a 4): 3

--- Vetor Extraido (Coluna 3) ---
[0] -> 4
[1] -> 9
[2] -> 4
```

## Autor

Matheus da Silva Cezar