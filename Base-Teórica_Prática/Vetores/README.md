# Vetores (Arrays Unidimensionais) em C 📊

Esta pasta contém algoritmos voltados para o estudo de Vetores (também conhecidos como Arrays Unidimensionais). O foco aqui é aprender a armazenar, acessar e manipular coleções de dados do mesmo tipo de forma estruturada e eficiente, utilizando uma única variável.

📂 Conteúdos Abordados

1. **Leitura e Escrita de Dados**: Como transferir dados do usuário para os índices da memória.

2. **Operações em Lote**: Cálculos de média, soma total e contagem de ocorrências dentro de arrays.

3. **Inversão de Lógica**: Programas que leem vetores de trás para frente (índice decrescente).

4. **Algoritmos de Busca**: Identificação de valores extremos (Maior e Menor) em um conjunto de dados.

## 🧠 Conceitos Fundamentais

Abaixo estão os pilares teóricos exigidos para compreender os códigos desta seção, detalhados com exemplos práticos:

### 1. Declaração e Inicialização
Um vetor é um bloco contínuo de memória que guarda múltiplos valores do mesmo tipo. Para criá-lo, você informa o tipo de dado, o nome da variável e o tamanho (quantidade de "gavetas" que ele terá) entre colchetes `[]`.
Você pode iniciá-lo vazio ou já com valores predefinidos (Hardcode).

**Exemplo Prático:**
```c
// Declara um vetor vazio para guardar 5 idades
int idades[5]; 

// Declara e já preenche um vetor com 4 notas
float notas[4] = {8.5, 7.0, 9.2, 6.5};
```

### 2. Indexação (Acesso Base Zero)

A regra de ouro da linguagem C: **todo vetor começa** no índice 0.
Se um vetor tem tamanho 5, suas posições válidas vão de `0` até `4`. Para acessar ou modificar uma "gaveta" específica, você usa o número do índice dentro dos colchetes.

**Exemplo Prático:**
```c
int numeros[3];

numeros[0] = 10; // Guarda 10 na primeira posição
numeros[1] = 20; // Guarda 20 na segunda posição
numeros[2] = 30; // Guarda 30 na terceira e última posição

printf("O primeiro numero e: %d\n", numeros[0]);
```

### 3. Iteração (Percorrendo Vetores com Laços)

A verdadeira força dos vetores aparece quando os combinamos com a estrutura de repetição `for`. Podemos usar a variável contadora do laço (geralmente `i`) para representar o índice do vetor, automatizando a leitura e a impressão de todos os itens.

**Exemplo Prático:**
```c
int valores[5];

// Lendo 5 valores do teclado e guardando no vetor
for (int i = 0; i < 5; i++) {
    printf("Digite o valor da posicao %d: ", i);
    scanf("%d", &valores[i]); // Note o & para gravar na memoria
}

// Imprimindo todos os valores do vetor
for (int i = 0; i < 5; i++) {
    printf("%d ", valores[i]);
}
```

### 4. O Perigo dos Limites (Out of Bounds)

A linguagem C **não verifica automaticamente** se você ultrapassou o tamanho do vetor. Se você tentar acessar a posição 5 de um vetor que só vai de 0 a 4, o programa invadirá um espaço de memória desconhecido, o que pode causar falhas graves ou resultados bizarros. Manter o controle exato dos índices é responsabilidade do programador.

**Exemplo Prático (O QUE NÃO FAZER):**
```c
int pequeno[2] = {10, 20};
// pequeno[2] = 30; // ERRO! Os indices validos sao apenas 0 e 1.
```

### 5. Algoritmos de Busca e Lógica Mapeada

Manipular vetores envolve criar lógicas para encontrar informações específicas lá dentro (como o maior valor, o menor, ou a soma de todos). Para isso, costumamos assumir que o primeiro elemento (`vetor[0]`) é a nossa referência inicial e o comparamos com o resto

**Exemplo Prático (Encontrando o maior valor):**
```c
int vetor[4] = {5, 12, 3, 8};
int maior = vetor[0]; // Assumo que o primeiro é o maior

for (int i = 1; i < 4; i++) {
    if (vetor[i] > maior) {
        maior = vetor[i]; // Atualizo o maior valor encontrado
    }
}
printf("O maior valor do vetor e: %d\n", maior);
```

## Autor

Matheus da Silva Cezar
