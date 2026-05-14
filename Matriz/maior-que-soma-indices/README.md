# Valor Maior que a Soma dos Índices

Este programa interativo lê uma matriz bidimensional (5x5) e filtra todos os elementos que cumprem uma regra matemática específica: o valor armazenado dentro da célula deve ser estritamente maior que a soma das coordenadas daquela célula.

## 🧠 Conceitos Fundamentais

**Separação de Responsabilidades (Clean Code):**
Este algoritmo foi estruturado separando a etapa de leitura e a etapa de processamento. Intercalar leitura de teclado com validação condicional e saída de resultados em um único bloco polui a interface do usuário e dificulta futuras manutenções no código.

**Lógica Condicional com Índices:**
Em C, as matrizes são indexadas começando no zero (Zero-based indexing). O algoritmo varre a matriz utilizando a condicional `if (matriz[i][j] > (i + j))` baseando-se nos próprios iteradores de controle dos laços `for`.

## 🚀 Como Executar

1. Registre o executável no seu `CMakeLists.txt` principal:
   ```cmake
   add_executable(maior_soma_indices Matrizes/maior-que-soma-indices/main.c)

## Exemplo de Execução

```text
=== VALOR MAIOR QUE A SOMA DOS INDICES ===

--- PREENCHIMENTO DA MATRIZ 5x5 ---
Digite o valor da posicao [0][0]: 2
Digite o valor da posicao [0][1]: 0
Digite o valor da posicao [0][2]: 5
(...)

Matriz Digitada:
  2   0   5   1   0
(...)

--- ELEMENTOS MAIORES QUE A SOMA DOS INDICES ---
matriz[0][0] =  2  ->  (2 > 0)
matriz[0][2] =  5  ->  (5 > 2)
```
## Autor

Matheus da Silva Cezar
