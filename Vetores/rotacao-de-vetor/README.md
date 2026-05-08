# Deslocamento Circular de Vetor

Programa desenvolvido em linguagem C que preenche um vetor numérico e realiza um deslocamento circular (shift para a direita) de seus elementos com base em um valor de posições (`n`) informado pelo usuário.

A lógica implementa aritmética modular para garantir que os elementos que forem deslocados para "fora" do limite final do vetor sejam recolocados na extremidade inicial, sem perda de dados.

## Funcionalidades

- Preenchimento de um array unidimensional de tamanho estático (definido por constante macro).
- Leitura de um índice de deslocamento.
- Movimentação circular dos dados para a direita.
- Proteção utilizando o operador módulo para garantir que o índice de destino sempre esteja dentro dos limites da memória.

## Tecnologias Utilizadas

- Linguagem C
- Biblioteca `stdio.h`

## Conceitos Aplicados

- Constantes (`#define`).
- Manipulação de **Vetores (Arrays)**.
- Passagem de vetores como parâmetro para funções.
- Aritmética Modular (operador `%`).

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
=== DESLOCAMENTO CIRCULAR DE VETOR ===

Digite os 5 elementos do vetor:
10
20
30
40
50

Digite o valor do deslocamento para a direita (n < 5): 2

Vetor apos o deslocamento de 2 posicoes:
40 50 10 20 30
```

## Autor

Matheus da Silva Cezar
