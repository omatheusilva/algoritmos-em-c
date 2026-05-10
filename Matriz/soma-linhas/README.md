# Soma das Linhas de uma Matriz

Este programa em C preenche uma matriz quadrada 4x4 com dados do usuário e, em seguida, calcula e exibe o somatório de cada linha individualmente.

## 🧠 Conceitos Fundamentais

Este exercício destaca uma armadilha muito comum na lógica de programação: **o escopo e o reset de acumuladores**.

* **Varredura Horizontal:** O laço de repetição externo trava na linha `i`, enquanto o laço interno percorre todas as colunas `j` daquela linha.
* **Reset do Acumulador:** A variável que guarda a soma de uma linha precisa ser declarada ou zerada (`somaLinha = 0`) *dentro* do laço externo, mas *antes* do laço interno. Se ela não for zerada, a linha 2 somará os seus próprios valores mais os valores da linha 1, e assim por diante.

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
=== SOMA DAS LINHAS DA MATRIZ ===

--- PREENCHIMENTO DA MATRIZ 4x4 ---
Digite o numero da posicao [1][1]: 1
Digite o numero da posicao [1][2]: 2
Digite o numero da posicao [1][3]: 3
Digite o numero da posicao [1][4]: 4
(...)

--- RESULTADOS ---
A soma da linha 1 eh: 10
A soma da linha 2 eh: 26
A soma da linha 3 eh: 42
A soma da linha 4 eh: 58
```

## Autor

Matheus da Silva Cezar