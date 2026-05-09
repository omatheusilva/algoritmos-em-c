# Matrizes (Arrays Bidimensionais) 🧮

Esta pasta contém algoritmos focados na manipulação de matrizes, que são estruturas de dados capazes de armazenar informações em múltiplas dimensões (como uma tabela ou grade de linhas e colunas).

## O que você precisa saber para entender estes programas:
* **Sintaxe Bidimensional:** Como declarar uma matriz informando primeiro o número de linhas e depois o de colunas, ex: `int matriz[linhas][colunas];`.
* **Laços Aninhados (Nested Loops):** O uso obrigatório de um `for` dentro de outro `for`. Geralmente, o laço externo (`i`) percorre as linhas, enquanto o laço interno (`j`) percorre as colunas daquela linha.
* **Sistema de Coordenadas:** Compreender que o elemento `[0][0]` é o primeiro (canto superior esquerdo) e que o controle de índices dita exatamente onde o dado está na memória.
* **Padrões Matemáticos de Índices:** * Diagonal Principal: onde a linha é igual à coluna (`i == j`).
    * Diagonal Secundária: onde a soma da linha e coluna resulta no tamanho da matriz menos 1.
* **Passagem de Matrizes para Funções:** Entender que, ao passar uma matriz multidimensional para uma função em C, é obrigatório informar pelo menos o tamanho das colunas nos parâmetros.