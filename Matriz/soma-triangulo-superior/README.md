# Somatório do Triângulo Superior em Matriz

Este algoritmo lê dados inseridos pelo usuário para construir uma matriz quadrada (5x5) e calcula a soma exclusiva dos elementos que pertencem ao **triângulo superior**, ou seja, todos os elementos que estão estritamente acima da diagonal principal.

## 🧠 Conceitos Fundamentais

Em Álgebra Linear, o triângulo superior de uma matriz é formado por todos os elementos $a_{ij}$ onde o índice da coluna é estritamente maior que o índice da linha ($j > i$).



**Otimização de Algoritmo:**
Em vez de varrer todas as 25 posições da matriz e usar uma condicional `if (j > i)` (o que custaria mais processamento), este algoritmo utiliza **matemática de índices** diretamente nos laços `for`:
* O laço das linhas (`i`) vai apenas até a penúltima linha, pois a última linha inteira pertence à diagonal ou ao triângulo inferior.
* O laço das colunas (`j`) não começa no zero, mas sim em `i + 1`. Isso força o ponteiro a pular a diagonal principal e cair direto na primeira casa válida do triângulo superior.

## 🚀 Como Executar

1. Tenha o `CMake` e um compilador C configurados.
2. Registre o executável no `CMakeLists.txt` na raiz do seu repositório:
   ```cmake
   add_executable(triangulo_superior Matrizes/soma-triangulo-superior/main.c)
```text
=== SOMA DO TRIANGULO SUPERIOR ===

Matriz Inicial:
  1   2   3   4   5 
  6   7   8   9   0 
  1   2   3   4   5 
  6   7   8   9   0 
  1   1   1   1   1 

Somatorio do triangulo superior: 36
```
## Autor

Matheus da Silva Cezar