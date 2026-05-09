# Validador de Jogo da Velha (Tic-Tac-Toe)

Este programa em C analisa o estado de uma matriz bidimensional 3x3 composta por caracteres (`char`), simulando o clássico Jogo da Velha. O algoritmo varre a estrutura para verificar se as regras de vitória foram alcançadas por um dos jogadores.

## Funcionalidades

- **Renderização Visual:** Função dedicada para imprimir o tabuleiro de forma formatada (utilizando separadores lógicos `|` e `---`).
- **Lógica de Verificação Completa:** Mapeia todas as 8 possibilidades de vitória (3 linhas, 3 colunas, 2 diagonais).
- **Retorno Antecipado (Early Return):** A função de análise encerra e retorna o resultado no exato milissegundo em que uma condição de vitória é confirmada, garantindo código limpo e execuções eficientes.

## Conceitos Aplicados

- **Matrizes de Caracteres**: Operando `char` bidimensionais em vez de números inteiros.
- **Lógica Booleana Complexa**: Múltiplas condições interligadas pelo operador lógico E (`&&`).
- **Funções com Retorno**: Utilizando o tipo `char` como resposta de uma função `verificarVencedor`.

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
=== VALIDADOR DE JOGO DA VELHA ===

--- TABULEIRO ---
 - | - | X 
---|---|---
 - | X | - 
---|---|---
 X | - | - 
-----------------

Resultado: Jogador 1 (X) venceu!
```

## Autor

Matheus da Silva Cezar