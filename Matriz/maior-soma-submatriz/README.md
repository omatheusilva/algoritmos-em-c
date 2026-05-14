# Maior Somatório em Submatriz NxN

Este algoritmo analisa uma matriz bidimensional (5x5) e procura qual é o "quadrado" interno (submatriz de tamanho $N \times N$, definido pelo usuário) que possui a maior soma de elementos. Ao final, ele exibe o valor do somatório e as coordenadas do canto superior esquerdo dessa submatriz.

## 🧠 Conceitos Fundamentais

Este código implementa o padrão de **Janela Deslizante em 2D** (2D Sliding Window). É uma técnica avançada que serve como base matemática para algoritmos de processamento de imagens e Visão Computacional em Inteligência Artificial.



**Arquitetura do Algoritmo:**
* **Sem Ponteiros (Função Void):** Como a linguagem C permite retornar apenas um único valor por função usando o `return`, a arquitetura deste código foi desenhada para realizar o cálculo e a exibição na mesma função (`calcularEExibirMaiorSubmatriz`). Isso elimina a necessidade de usar ponteiros para devolver a soma e as duas coordenadas simultaneamente para o `main`.
* **Laços Externos (`i` e `j`):** Movem a "janela" de busca pela matriz. Eles iteram estrategicamente apenas até `TAMANHO - n` para garantir que a janela nunca tente ler dados fora dos limites da matriz, o que causaria um erro fatal (*Segmentation Fault*).
* **Laços Internos (`x` e `y`):** Somam os elementos estritamente dentro da janela atual, combinando os índices através da instrução `matriz[i + x][j + y]`.

## 🚀 Como Executar

1. Adicione o executável ao arquivo `CMakeLists.txt` na raiz do seu repositório:
   ```cmake
   add_executable(maior_soma_submatriz Matrizes/maior-soma-submatriz/main.c)


## Exemplo de Execução

```text
=== MAIOR SOMATORIO EM SUBMATRIZ NxN ===

--- PREENCHIMENTO DA MATRIZ 5x5 ---
Digite o numero da posicao [1][1]: 1
(...)

Digite o tamanho da submatriz (N) [1 a 5]: 2

Matriz Digitada:
  1   2   3   4   5 
  6   7   8   9   0 
  1   2   3   4   5 
  6   7   8   9   0 
  1   2   3   4   5 

--- RESULTADOS ---
Maior soma encontrada: 34
Coordenada inicial (canto superior esquerdo): [2][3]
```
## Autor

Matheus da Silva Cezar