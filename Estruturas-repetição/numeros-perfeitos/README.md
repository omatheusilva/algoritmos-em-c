# Busca de Números Perfeitos

Programa desenvolvido em linguagem C que identifica e exibe na tela todos os "números perfeitos" dentro de um intervalo de 1 a 100. Um número perfeito apresenta a característica peculiar de ter seu valor igual à soma de todos os seus divisores (excluindo o próprio número). Exemplo: `6` tem como divisores `1, 2 e 3`, e `1 + 2 + 3 = 6`.

## Funcionalidades

- Percorre de forma automatizada um intervalo numérico predefinido.
- Encontra e soma todos os divisores de um número.
- Compara a soma dos divisores com o número analisado.
- Exibe apenas os números que satisfazem a condição de serem perfeitos.

## Tecnologias Utilizadas

- Linguagem C
- Biblioteca `stdio.h`

## Conceitos Aplicados

- Funções modulares e retorno de valores (lógica Booleana).
- Estruturas de repetição (`for`).
- Estruturas condicionais (`if`).
- Operações matemáticas (operador módulo `%`).

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
=== BUSCA DE NUMEROS PERFEITOS ===

Numeros perfeitos entre 1 e 100:
- 6 eh perfeito
- 28 eh perfeito
```

## Autor

Matheus da Silva Cezar