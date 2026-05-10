# Batalha das Diagonais (Soma de Diagonais em Matriz)

Algoritmo desenvolvido em C que realiza o preenchimento de uma matriz quadrada (5x5) e calcula, de forma independente, o somatório dos elementos presentes na **Diagonal Principal** e na **Diagonal Secundária**.

## Funcionalidades

- Leitura de dados bidimensionais.
- Cálculo de somatórios isolados para as cruzes diagonais da matriz.
- **Modularização Simples:** A lógica de cálculo e a impressão dos resultados estão agrupadas em uma única função dedicada, separando a entrada de dados do processamento principal.
- **Lógica Otimizada:** Utilização de um único laço `for` (apenas 5 verificações) em vez de varrer a matriz inteira, calculando os índices matematicamente para máxima eficiência.

## Conceitos Aplicados

- **Matrizes (Arrays Bidimensionais)**.
- Otimização de tempo de execução.
- Aritmética de Índices:
  - Principal: `matriz[i][i]`
  - Secundária: `matriz[i][Tamanho - 1 - i]`
- Funções do tipo `void` (sem retorno).

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
*(Nota: Para simplificar a demonstração, este exemplo simula a digitação sequencial dos números de 1 a 25).*

```text
=== BATALHA DAS DIAGONAIS (MATRIZ 5x5) ===

Digite os 25 valores para preencher a matriz:
Elemento [0][0]: 1
Elemento [0][1]: 2
Elemento [0][2]: 3
Elemento [0][3]: 4
Elemento [0][4]: 5
Elemento [1][0]: 6
...
Elemento [2][2]: 13
...
Elemento [4][3]: 24
Elemento [4][4]: 25

=== RESULTADOS ===
Soma da Diagonal Principal...: 65
Soma da Diagonal Secundaria..: 65
```

## Autor

Matheus da Silva Cezar