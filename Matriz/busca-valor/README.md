# Busca de Valor em Matriz

Este programa em C implementa um algoritmo de **Busca Linear** em uma matriz 4x4. O usuário preenche a matriz, informa um número alvo e o sistema retorna as coordenadas exatas da primeira ocorrência desse número, ou informa caso ele não exista.

## 🧠 Conceitos Fundamentais

Este algoritmo introduz uma técnica excelente de otimização de código:

* **Busca Linear (Sequential Search):** É o método mais simples de busca, onde verificamos cada elemento da estrutura de dados um por um, em ordem, até encontrar o valor desejado ou até que a estrutura acabe.
* **Early Return (Retorno Precoce):** Como separamos a lógica de busca em uma função dedicada (`buscarValor`), não precisamos de variáveis de controle (flags) ou comandos `break` complexos para parar os laços aninhados. Ao usar o `return;` assim que o valor é encontrado, o processador descarta o resto do loop e a função é encerrada imediatamente, economizando recursos da máquina.

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
=== SISTEMA DE BUSCA NA MATRIZ ===

--- PREENCHIMENTO DA MATRIZ 4x4 ---
Digite o numero da posicao [1][1]: 10
Digite o numero da posicao [1][2]: 20
(...)
Digite o valor que deseja buscar: 20

[SUCESSO] Encontrei o numero 20 na posicao [1][2]!
```

## Autor

Matheus da Silva Cezar