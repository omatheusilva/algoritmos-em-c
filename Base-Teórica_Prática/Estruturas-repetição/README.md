# Estruturas de Repetição em C 🔄

Esta pasta contém os algoritmos focados em laços de repetição (loops). O objetivo aqui é aprender a executar um mesmo bloco de código múltiplas vezes de forma automatizada, controlando o fluxo de execução com base em condições lógicas.

## 📂 Conteúdos Abordados

1. **Iteração Simples**: Uso do for para contagens crescentes, decrescentes e geração de tabuadas.

2. **Validação de Entrada**: Uso do while e do-while para prender o usuário até que ele digite um valor válido.

3. **Lógica de Acumulação**: Programas que somam diversos valores digitados para calcular médias gerais ou somatórios.

4. **Descobrindo Padrões**: Algoritmos que varrem uma sequência de números para encontrar o maior/menor valor lido dentro de um laço.

## 🧠 Conceitos Fundamentais

Abaixo estão os pilares teóricos exigidos para compreender os códigos desta seção, detalhados com exemplos práticos:

### 1. Laço `for` (Para)

É a estrutura de repetição ideal para quando **já sabemos exatamente quantas vezes** queremos que o código se repita. Ele concentra três passos na mesma linha: inicialização, condição de parada e incremento/decremento.

**Exemplo Prático:**
```c
// Imprime os números de 1 a 5
// 1. Inicia o 'i' em 1
// 2. Repete enquanto 'i' for menor ou igual a 5
// 3. Aumenta 'i' em 1 a cada volta (i++)
for (int i = 1; i <= 5; i++) {
    printf("Contagem: %d\n", i);
}
```

### 2. Laço `while` (Enquanto)

Utilizado quando **não sabemos quantas vezes** o laço vai rodar, mas sabemos qual é a condição para que ele continue rodando. O teste lógico é feito no início, ou seja, se a condição for falsa logo de cara, o código dentro dele nunca será executado. É preciso ter cuidado para atualizar a variável de controle e evitar "loops infinitos".

**Exemplo Prático:**
```c
int senha = 0;

// O laço continuará rodando enquanto a senha for diferente de 1234
while (senha != 1234) {
    printf("Digite a senha: ");
    scanf("%d", &senha);
}
printf("Acesso Permitido!\n");
```

### 3. Laço `do-while` (Faça-Enquanto)

Muito parecido com o `while`, mas com uma diferença crucial: o teste lógico é feito no final. Isso garante que o bloco de código será **executado pelo menos uma vez**, independentemente da condição. É excelente para criar menus interativos.

**Exemplo Prático:**
```c
int opcao;

do {
    printf("\n1 - Jogar\n2 - Sair\nEscolha: ");
    scanf("%d", &opcao);
} while (opcao != 2); // Repete a exibição do menu se o usuário não digitar 2
```

### 4. Variáveis Contadoras e Acumuladoras

São conceitos lógicos aplicados junto aos laços para extrair resultados de uma repetição.

* **Contador**: Uma variável que aumenta seu valor de forma constante (geralmente de 1 em 1) para contar ocorrências. Ex: `quantidade++`.

* **Acumulador**: Uma variável que soma valores variáveis ao longo do tempo. Necessita iniciar com o valor zero. Ex: `somaTotal = somaTotal + valorNovo` (ou `somaTotal += valorNovo`).

**Exemplo Prático:**
```c
int totalNotas = 0; // Contador
float somaNotas = 0.0, nota; // 'somaNotas' é o acumulador

for (int i = 0; i < 3; i++) {
    printf("Digite a nota: ");
    scanf("%f", &nota);
    somaNotas += nota; // Acumula o valor digitado
    totalNotas++;      // Conta que mais uma nota foi lida
}
```

### 5. Controle de Fluxo: `break` e `continue`

Comandos que permitem alterar o comportamento natural de um loop de forma forçada.

* `break`: Interrompe o laço inteiro imediatamente, jogando o programa para a primeira linha após a estrutura de repetição.

* `continue`: Pula o restante do código daquela iteração específica e vai direto para a próxima repetição do laço.

**Exemplo Prático:**
```c
for (int i = 1; i <= 10; i++) {
    if (i == 3) {
        continue; // Pula o número 3 (não imprime), mas continua o laço
    }
    if (i == 6) {
        break; // Para o laço totalmente quando chega no 6
    }
    printf("%d ", i); // A saída será: 1 2 4 5
}
```

## Autor

Matheus da Silva Cezar