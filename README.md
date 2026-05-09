

***

# Algoritmos em C 📚

Repositório com exercícios de programação e estruturas de dados desenvolvidos em linguagem C. Ideal para estudantes que querem praticar vetores, matrizes e boas práticas de código.

## 📖 Guia de Estudo e Conteúdo
Para facilitar o aprendizado, o repositório é dividido por tópicos. Cada pasta abaixo possui seu próprio README.md, detalhando os conceitos teóricos e pré-requisitos necessários para entender os códigos daquela seção.
- 📂[fundamento-logica](./fundamentos-logica) -Exercícios com condicionais e cálculos matemáticos
- 📂[Estruturas-repetição](./Estruturas-repetição)-Exercícios com `for` e `while`
- 📂[Vetores](./Vetores/) - Exercícios com arrays unidimensionais
- 🚧**Matrizes** - Em desenvolvimento

## 🛠️ Tecnologias e Ferramentas

- **Linguagem**: C
- **IDE**: CLion (JetBrains)
- **Compilador**: GCC
- **Sistema de Build**: CMake

## 🚀 Como executar

1. Clone o repositório: `git clone https://github.com/omatheusilva/algoritmos-em-c.git`
2. Entre na pasta do exercício desejado: `cd algoritmos-em-c/Vetores/rotacao-de-vetor`
3. Compile: `gcc main.c -o programa`
4. Execute:
   - Linux/macOS:`./programa`
   - windows:`programa.exe`

## 🦁 Como Executar (CMake)

1. Abra a pasta raiz do projeto `algoritmos-em-c` no CLion.
2. O CLion detectará automaticamente os arquivos `CMakeLists.txt` dentro das pastas..
3. No canto superior direito, selecione o Target `o nome do exercício` que você deseja executar.
4. Clique no botão Run `Play verde` ou pressione `Shift + F10`.

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

