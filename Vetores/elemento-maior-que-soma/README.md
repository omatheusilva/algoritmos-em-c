# Elemento Maior que a Soma Restante

Programa desenvolvido em linguagem C que preenche um vetor com elementos numéricos e verifica se há, dentre eles, um valor que seja estritamente maior do que a soma de todos os outros elementos do vetor combinados.

## Funcionalidades

- Preenchimento de um array unidimensional parametrizado via constante macro.
- Prevenção de *Integer Overflow* utilizando o tipo de dado `long long` para armazenar a soma.
- Lógica matemática otimizada de complexidade O(n): em vez de calcular a soma restante repetidas vezes, o programa calcula a soma total uma única vez e a subtrai do elemento atual testado (`somaTotal - elementoAtual`).

## Tecnologias Utilizadas

- Linguagem C
- Biblioteca `stdio.h`

## Conceitos Aplicados

- Constantes (`#define`).
- Manipulação de **Vetores (Arrays)**.
- Tipos primitivos de alta capacidade (`long long`).
- Otimização de complexidade de tempo de execução.
- Funções modulares de checagem.
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

## Exemplo de Execução COM elemento maior que a soma dos outros

```text
=== VERIFICADOR DE ELEMENTO MAIOR QUE A SOMA ===

Digite os 5 elementos do vetor:
2
3
1
50
4

Analisando o vetor...
Resultado: Existe um elemento que eh MAIOR que a soma de todos os outros.
```

## Exemplo de Execução SEM elemento maior que a soma dos outros

```text
=== VERIFICADOR DE ELEMENTO MAIOR QUE A SOMA ===

Digite os 5 elementos do vetor:
10
20
30
15
5

Analisando o vetor...
Resultado: NAO existe nenhum elemento com essa caracteristica.
```

## Autor

Matheus da Silva Cezar