# Verificador de Elementos Adjacentes em Vetor

Programa desenvolvido em linguagem C que preenche um vetor com elementos numéricos e, após a leitura total, realiza uma varredura para identificar se existem dois números com valores idênticos ocupando posições vizinhas (adjacentes) na memória.

## Funcionalidades

- Preenchimento de um array unidimensional com tamanho parametrizável via constante.
- Varredura de dados com controle estrito de limites de índice (evitando acesso indevido à memória).
- Lógica de busca otimizada: a verificação é encerrada instantaneamente assim que a primeira repetição adjacente é encontrada.

## Tecnologias Utilizadas

- Linguagem C
- Biblioteca `stdio.h`

## Conceitos Aplicados

- Constantes (`#define`).
- Manipulação de **Vetores (Arrays)**.
- Prevenção de erros de *Out of Bounds* ao iterar arrays (`tamanho - 1`).
- Funções modulares de checagem.

## Como Executar

Linux/macOS:

```bash
./programa
```

Windows:

```bash
programa.exe
```

## Exemplo de Execução COM valores adjacentes iguais

```text
=== VERIFICADOR DE ELEMENTOS ADJACENTES ===

Digite os 5 elementos do vetor:
10
25
25
40
50

Analisando o vetor...
Resultado: Existem posicoes adjacentes com valores iguais.
```

## Exemplo de Execução SEM valores adjacentes iguais
```text
=== VERIFICADOR DE ELEMENTOS ADJACENTES ===

Digite os 5 elementos do vetor:
10
20
10
40
50

Analisando o vetor...
Resultado: NAO existem posicoes adjacentes com valores iguais
```
## Autor

Matheus da Silva Cezar