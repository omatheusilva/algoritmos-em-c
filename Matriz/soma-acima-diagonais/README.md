# Soma Acima das Diagonais

Este programa processa uma matriz quadrada preenchida pelo usuário e extrai especificamente a soma dos elementos que formam o triângulo superior da matriz (o espaço delimitado acima do cruzamento entre a diagonal principal e a diagonal secundária).

## 🧠 Conceitos Fundamentais

O espaço "acima das diagonais" é definido pela união de duas condições matemáticas:
1. **Acima da Principal:** O índice da coluna deve ser estritamente maior que o índice da linha ($j > i$).
2. **Acima da Secundária:** A soma dos índices da linha e da coluna deve ser estritamente menor que a ordem da matriz menos um ($i + j < N - 1$).

**Otimização Suprema do Iterador:**
Em vez de varrer a matriz por completo ($O(N^2)$) e testar cada elemento com `if (j > i && i + j < N - 1)`, o algoritmo incorpora as restrições matemáticas **diretamente nos limites do laço `for`**. O código visita cirurgicamente apenas as células-alvo, reduzindo drasticamente o número de ciclos de CPU desperdiçados. Além disso, o laço da linha não passa do meio da matriz (`TAMANHO / 2`), poupando ainda mais processamento.

## 🚀 Como Executar

1. Adicione a instrução de compilação no seu arquivo `CMakeLists.txt` principal:
   ```cmake
   add_executable(soma_acima_diagonais Matrizes/soma-acima-diagonais/main.c)

## Exemplo de Execução

```text
=== SOMA ACIMA DAS DIAGONAIS (PRINCIPAL E SECUNDARIA) ===

--- PREENCHIMENTO DA MATRIZ 5x5 ---
(...)

Matriz Digitada:
  1   2   3   4   5 
  6   7   8   9   0 
  1   2   3   4   5 
  6   7   8   9   0 
  1   2   3   4   5 

--- RESULTADOS ---
Valor da soma do quadrante superior: 17
```

## Autor

Matheus da Silva Cezar
