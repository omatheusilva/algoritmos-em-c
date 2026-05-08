# Divisíveis entre 1 e 1000

Programa desenvolvido em linguagem C que lê um número inteiro `n` informado pelo usuário e exibe todos os valores entre 1 e 1000 que são divisíveis por esse número, contabilizando e exibindo também o total de ocorrências encontradas.

## Funcionalidades

- Leitura de um número inteiro
- Prevenção contra erro de divisão por zero
- Verificação de divisibilidade utilizando o operador módulo (`%`)
- Contagem e exibição de todos os múltiplos no intervalo de 1 a 1000

## Tecnologias Utilizadas

- Linguagem C
- Biblioteca `stdio.h`

## Conceitos Aplicados

- Funções modulares
- Estruturas de repetição (`for`)
- Estruturas condicionais (`if`)
- Validação de entrada de dados

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
=== VERIFICADOR DE DIVISIBILIDADE (1 a 1000) ===

Digite um valor inteiro (n): 250

Numeros entre 1 e 1000 divisiveis por 250:
250 500 750 1000 

Total de numeros encontrados: 4
```

## Autor

Matheus da Silva Cezar