# Fundamentos de Lógica em C 🖥️

Esta pasta contém os algoritmos iniciais desenvolvidos para consolidar os conceitos básicos de programação. Aqui, o foco está na compreensão da sintaxe da linguagem C, manipulação de variáveis e tomada de decisão através de estruturas condicionais.

## 📂 Conteúdos Abordados

1. **Variáveis e Atribuições**: Exercícios de troca de valores e cálculos de fórmulas matemáticas.

2. **Cálculo de Médias**: Aplicação de operadores aritméticos e conversão de tipos (casting).

3. **Verificação de Condições**: Programas que determinam lógicas booleanas clássicas (par/ímpar, maioridade, aprovação).

4. **Estrutura Switch-Case**: Organização de menus de escolha múltipla, simplificando cadeias de `if/else`.

## 🧠 Conceitos Fundamentais

Abaixo estão os pilares teóricos exigidos para compreender os códigos desta seção, detalhados com exemplos práticos:

### 1. Tipagem de Dados
A linguagem C é fortemente tipada, o que significa que o computador precisa saber exatamente quanto de memória reservar para cada informação.
* `int`: Armazena números inteiros (sem casas decimais).
* `float` / `double`: Armazenam números reais (com casas decimais). O `double` possui o dobro de precisão do `float`.
* `char`: Armazena um único caractere, que deve estar sempre entre aspas simples (`' '`).

**Exemplo Prático:**
```c
int quantidade = 15;
float saldoBancario = 1250.75;
char categoria = 'A';
```

### 2. Entrada e Saída Padrão (I/O)
A comunicação com o usuário ocorre através da biblioteca `stdio.h`. Precisamos usar **especificadores de formato** (`%d` para inteiros, `%f` para reais, `%c` para caracteres) para dizer à linguagem que tipo de dado estamos lendo ou escrevendo.

* `printf()`: Usado para imprimir textos e o conteúdo das variáveis na tela.

* `scanf()`: Usado para capturar o que o usuário digita. Requer o uso do operador `&` (endereço de memória) antes da variável.

**Exemplo Prático:**
```c
int idade;
printf("Digite a sua idade: ");
scanf("%d", &idade); // O '&' indica onde a variável 'idade' mora na memória
printf("Voce tem %d anos de idade.\n", idade);
```

### 3. Operadores Aritméticos
Servem para executar cálculos matemáticos dentro dos algoritmos. 
Além do básico de Adição (`+`), Subtração (`-`), Multiplicação (`*`) e Divisão (`/`), temos o operador de Módulo (`%`).

* **Módulo (`%`)**: Retorna o "resto" de uma divisão inteira. É a principal ferramenta na programação para descobrir se um número é par (resto 0) ou ímpar (resto 1), ou se é múltiplo de outro.

**Exemplo Prático:**
```c
int a = 10;
int b = 3;
int divisao = a / b; // Resultado: 3 (pois ambos são inteiros)
int resto = a % b;   // Resultado: 1 (resto da divisão de 10 por 3)
```

### 4. Estruturas Condicionais
Permitem que o programa tome decisões e desvie o fluxo de execução com base em certas condições.

* `if` (se): O bloco de código só roda se a condição for verdadeira.

* `else if` (senão se): Testa uma nova condição caso a primeira tenha falhado.

* `else` (senão): É o "plano B", rodando automaticamente se todas as condições acima forem falsas.

**Exemplo Prático:**
```c
int nota = 6;

if (nota >= 7) {
    printf("Aprovado!\n");
} else if (nota >= 5) {
    printf("Recuperacao!\n");
} else {
    printf("Reprovado!\n");
}
```

### 5. Operadores Relacionais e Lógicos
São usados dentro das estruturas condicionais (if/else ou laços) para criar regras e comparações.

* **Relacionais**: Comparam dois valores. Igual (==), Diferente (!=), Maior (>), Menor (<), Maior ou Igual (>=), Menor ou Igual (<=). Atenção: Um único = serve apenas para atribuir valor, não para comparar!

* **Lógicos**: Combinam múltiplas condições.

  * **E (&&)**: Todas as condições precisam ser verdadeiras.

  * **OU (||)**: Pelo menos uma condição precisa ser verdadeira.

**Exemplo Prático:**
```c
int idade = 25;
int possuiIngresso = 1; // 1 representa Verdadeiro (True) em C

// O usuário precisa ter 18+ anos E possuir um ingresso para entrar
if (idade >= 18 && possuiIngresso == 1) {
    printf("Acesso Liberado!\n");
}
```

