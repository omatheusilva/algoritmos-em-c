# Soma das Colunas de uma Matriz

Este programa em C lê valores para preencher uma matriz 5x5, exibe a grade formatada na tela e calcula o somatório individual de cada uma de suas colunas.

## 🧠 Conceitos Fundamentais

Este algoritmo é o inverso do cálculo de linhas, demonstrando o domínio sobre a **Varredura Vertical (Column-Major Order)** em C:

* **Inversão de Laços:** Para somar os elementos de uma coluna, travamos a coordenada da coluna no laço de repetição "de fora" e usamos o laço "de dentro" para descer através de todas as linhas (`matriz[linha][coluna]`).
* **Nomenclatura Semântica:** O uso de variáveis chamadas `col` e `lin` no lugar dos genéricos `i` e `j` facilita imensamente a leitura e manutenção do código quando estamos realizando varreduras não convencionais.

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
=== SOMA DAS COLUNAS DA MATRIZ ===

--- PREENCHIMENTO DA MATRIZ 5x5 ---
Digite o numero da posicao [1][1]: 2
Digite o numero da posicao [1][2]: 4
(...)

Matriz Digitada:
  2   4   6   8  10 
  1   3   5   7   9 
  (...)

--- RESULTADOS DAS COLUNAS ---
A soma da coluna 1 eh: 15
A soma da coluna 2 eh: 22
A soma da coluna 3 eh: 30
A soma da coluna 4 eh: 45
A soma da coluna 5 eh: 55
```

## Autor

Matheus da Silva Cezar