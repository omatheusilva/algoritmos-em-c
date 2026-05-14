# Somatório do Triângulo Inferior em Matriz

Este programa lê valores inseridos pelo usuário em uma matriz 5x5 e calcula a soma de todos os elementos contidos no **triângulo inferior**, ou seja, os valores localizados estritamente abaixo da diagonal principal.



## 🧠 Conceitos Fundamentais

Em Álgebra Linear, os elementos do triângulo inferior são todos os $a_{ij}$ onde o índice da linha é estritamente maior que o índice da coluna ($i > j$).

**Otimização Aplicada:**
1. **Laço das Linhas (`i`):** Começa em `1` em vez de `0`. A primeira linha de uma matriz (linha 0) contém apenas a diagonal principal e elementos do triângulo superior, logo, pular essa linha economiza processamento.
2. **Laço das Colunas (`j`):** Sempre se encerra quando atinge o valor de `i` (`j < i`), evitando que o programa processe a diagonal principal ou o triângulo superior.

## 🚀 Como Executar

1. Adicione o executável ao `CMakeLists.txt` na raiz:
   ```cmake
   add_executable(triangulo_inferior Matrizes/soma-triangulo-inferior/main.c)

## Exemplo de Execução

```text
=== SOMA DO TRIANGULO INFERIOR ===

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
Somatorio do triangulo inferior: 41
```