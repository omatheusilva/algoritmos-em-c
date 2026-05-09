# Busca de Maior Valor em Matriz (Caça ao Tesouro)

Programa desenvolvido em C que realiza a leitura de dados para preencher uma matriz 4x4 e, em seguida, executa um algoritmo de busca para identificar o maior valor armazenado e suas exatas coordenadas (índice da linha e da coluna).

## Funcionalidades

- Preenchimento interativo de uma matriz bidimensional parametrizada por macro (`#define`).
- Algoritmo de busca com inicialização segura (prevenindo falhas matemáticas com números negativos).
- Modularização simples, utilizando uma função dedicada para encapsular a lógica de busca e a impressão dos resultados.

## Conceitos Aplicados

- **Matrizes (Arrays Bidimensionais)**.
- Algoritmos de Busca Linear simples.
- Rastreamento de Índices (`i` e `j`).
- Laços de repetição aninhados (`for` dentro de `for`) e estruturas condicionais (`if`).

## Como Compilar

Utilizando GCC:

```bash
gcc main.c -o programa
```

## Como Executar

Linux/macOS:

```bash
./programa
```

Windows:

```bash
programa.exe
```

## Exemplo de Execução

```text
=== CACA AO TESOURO: MAIOR VALOR NA MATRIZ ===

Digite os 16 valores para preencher a matriz 4x4:
Elemento [0][0]: -5
Elemento [0][1]: 12
Elemento [0][2]: 4
...
Elemento [3][2]: 42
Elemento [3][3]: 1

=== RESULTADO DA BUSCA ===
O maior valor encontrado foi: 42
Ele esta localizado na Linha 3, Coluna 2
```

## Autor

Matheus da Silva Cezar