# Boletim Escolar (Soma de Linhas e Colunas)

Programa em linguagem C que ilustra o funcionamento de um boletim escolar através de uma matriz retangular 4x3. O algoritmo solicita as notas ao usuário e demonstra como percorrer a estrutura de dados de duas maneiras distintas: para calcular a média de cada aluno (somando os valores das linhas) e para calcular a média geral de cada prova (somando os valores das colunas).

## Funcionalidades

- **Entrada de Dados Interativa:** O usuário digita as notas prova por prova para cada aluno.
- **Varredura por Linha:** Fixa-se o índice do aluno e iteram-se as colunas para obter a média individual.
- **Varredura por Coluna:** Fixa-se o índice da prova e iteram-se as linhas para obter a média da turma.
- Modularização em funções (`void`), separando claramente a etapa de leitura e as etapas de cálculo/impressão.

## Conceitos Aplicados

- **Matrizes Retangulares** em C.
- Controle e inversão de laços aninhados (`Nested Loops`).
- Casting de tipos (`(float)`): Transformando a divisão de números inteiros em um número real para preservar as casas decimais da média.
- Uso de Arrays Unidimensionais (Vetores) para armazenar os resultados dos cálculos.

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
=== BOLETIM ESCOLAR (MATRIZ 4x3) ===

--- Digite as notas do Aluno 1 ---
Nota da Prova 1: 6
Nota da Prova 2: 6
Nota da Prova 3: 7

--- Digite as notas do Aluno 2 ---
Nota da Prova 1: 7
Nota da Prova 2: 7
Nota da Prova 3: 7

(...)

=== RESULTADOS ===

--- Media das notas dos alunos ---
Aluno 1: 6.33
Aluno 2: 7.00
Aluno 3: 6.00
Aluno 4: 2.00

--- Media das provas da turma ---
Prova 1: 5.00
Prova 2: 5.25
Prova 3: 5.75
```

## Autor

Matheus da Silva Cezar