# Contador de Números Pares em Matriz

Este programa em C lê valores inteiros digitados pelo usuário para preencher uma matriz quadrada 4x4 e, em seguida, varre toda a estrutura para contabilizar quantos desses números são pares.

## Funcionalidades

- **Leitura Bidimensional:** Entrada de dados iterativa para preencher as 16 posições de uma matriz 4x4.
- **Verificação de Paridade:** Utiliza o operador de módulo (`%`) para identificar números pares.
- **Isolamento de Lógica:** A contagem é feita em uma função dedicada que retorna um número inteiro, separando a regra de negócio da interface com o usuário.

## Conceitos Aplicados

- Matrizes Quadradas (`#define TAMANHO 4`).
- Laços de Repetição Aninhados (`for` dentro de `for`).
- Operadores Aritméticos e Variáveis Contadoras.
- Funções com retorno do tipo `int`.

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
=== CONTADOR DE NUMEROS PARES ===

--- PREENCHIMENTO DA MATRIZ 4x4 ---
Digite o numero da posicao [1][1]: 2
Digite o numero da posicao [1][2]: 5
Digite o numero da posicao [1][3]: 8
(...)

=== RESULTADO ===
Existem 9 numeros pares na matriz.
```

## Autor

Matheus da Silva Ceza