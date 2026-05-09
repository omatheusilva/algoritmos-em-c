# Batalha das Diagonais (Soma de Diagonais em Matriz)

Algoritmo desenvolvido em C que realiza o preenchimento de uma matriz quadrada (5x5) e calcula, de forma independente, o somatório dos elementos presentes na **Diagonal Principal** e na **Diagonal Secundária**.

## Funcionalidades

- Leitura de dados bidimensionais.
- Cálculo de somatórios isolados para as cruzes diagonais da matriz.
- **Lógica Otimizada:** Diferente da abordagem tradicional de varrer toda a matriz com dois laços `for` alinhados (25 verificações), este código utiliza um único laço `for` (5 verificações), calculando os índices das diagonais matematicamente para máxima eficiência.

## Conceitos Aplicados

- **Matrizes (Arrays Bidimensionais)**.
- Otimização de tempo de execução (Complexidade Linear).
- Aritmética de Índices:
    - Principal: `matriz[i][i]`
    - Secundária: `matriz[i][Tamanho - 1 - i]`
- **Ponteiros e Passagem por Referência**: Utilizados na função de cálculo para retornar as duas somas simultaneamente.

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