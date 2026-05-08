

***

# Algoritmos em C 📚

Repositório com exercícios de programação e estruturas de dados desenvolvidos em linguagem C. Ideal para estudantes que querem praticar vetores, matrizes e boas práticas de código.

## 📁 Conteúdo

- [Vetores](./Vetores/) - Exercícios com arrays unidimensionais
- [Matrizes](./Matrizes/) - Em desenvolvimento 🚧

## 🛠️ Tecnologias

- **Linguagem**: C (padrão ANSI)
- **IDE**: CLion
- **Compilador**: GCC

## 🚀 Como executar

1. Clone o repositório: `git clone https://github.com/omatheusilva/algoritmos-em-c.git`
2. Entre na pasta: `cd algoritmos-c`
3. Compile: `gcc -o programa nome_do_arquivo.c`
4. Execute: `./programa`

## 💡 Observação sobre funções

Os programas usam funções para promover modularização, reutilização de código e manutenção fácil — práticas profissionais essenciais.

Muitos exercícios podem ser feitos só na `main()`, mas evoluir para funções ajuda a organizar melhor. Veja o exemplo:

### Forma inicial (sem funções)

```c
int main(void) {
    // leitura
    // processamento  
    // saída
}
```

### Forma modularizada (com funções)

```c
void lerDados() { /* leitura */ }
void processarDados() { /* processamento */ }
void exibirResultado() { /* saída */ }

int main(void) {
    lerDados();
    processarDados();
    exibirResultado();
    return 0;
}
```

Comece simples e evolua gradualmente!

## ✍️ Autor

**Matheus da Silva Cezar**  
Estudante de Tecnologia em Redes de Computadores - UFSM  
📧 dasilvacezarmatheus@gmail.com | 💼 [LinkedIn](https://www.linkedin.com/in/matheus-da-silva-cezar-597b2b408)

***

