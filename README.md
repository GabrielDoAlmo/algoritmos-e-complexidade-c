# 🧮 Algoritmos em C: O Problema do Fatorial

<div align="center">
  <img src="https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white" alt="C" />
  <img src="https://img.shields.io/badge/L%C3%B3gica-Estruturas%20de%20Controle-success?style=for-the-badge" alt="Lógica de Programação" />
</div>

---

> **Este repositório explora um dos problemas matemáticos mais clássicos da Ciência da Computação — o cálculo do Fatorial — resolvido através de três paradigmas e estilos de programação completamente diferentes na linguagem C. O objetivo é demonstrar a evolução das estruturas de controlo e o impacto de cada abordagem na memória do computador.**

---

## 🎯 O Problema Central

Na matemática, o fatorial de um número inteiro não negativo *n* (representado por *n!*) é o produto de todos os inteiros positivos menores ou iguais a *n*. Por exemplo: `5! = 5 * 4 * 3 * 2 * 1 = 120`. 

Embora a matemática seja a mesma, a forma como instruímos o processador a executar essa tarefa dita a eficiência, a segurança e a legibilidade do nosso software. Abaixo estão as três soluções implementadas:

---

## 🧩 As Três Abordagens

### 1. Fatorial Iterativo (`fatorial_iterativo.c`)
**O Padrão da Indústria (Foco na Eficiência)**
* **A Lógica:** Utiliza um laço de repetição moderno e estruturado (neste caso, o `for`) com uma variável de controlo que acumula as multiplicações passo a passo.
* **Por que é importante?** Esta é a abordagem mais recomendada para sistemas reais em produção. A sua complexidade de tempo é *O(n)*, mas a sua grande vantagem é a complexidade de espaço *O(1)*. Como reaproveita sempre o mesmo espaço de memória para atualizar a variável do resultado final, não há risco de esgotar a memória do sistema (estouro de pilha), independentemente de quão longo o laço seja.

### 2. Fatorial Recursivo (`fatorial_recursivo.c`)
**A Elegância Matemática (Pilha de Chamadas / Call Stack)**
* **A Lógica:** A função resolve o problema dividindo-o em instâncias menores. Em vez de usar um laço de repetição, a função *chama-se a si mesma* repetidamente, reduzindo o número, até atingir um "critério de paragem" (o caso base `n <= 1`), resolvendo as multiplicações em cascata de trás para a frente.
* **Por que é importante?** O código fica extremamente limpo e declarativo, espelhando a fórmula matemática original. É excelente para navegar em Árvores e Grafos. Contudo, cada vez que a função se chama, o sistema empilha um novo bloco na memória. Isso cria uma complexidade de espaço *O(n)*, exigindo um controlo rigoroso do engenheiro de software para evitar o temido erro de *Stack Overflow* (Estouro de Pilha).

### 3. Fatorial Monolítico (`fatorial_monolitico.c`)
**O Baixo Nível (A Linguagem das Máquinas)**
* **A Lógica:** Descarta as facilidades dos comandos modernos (`for` ou `while`) e utiliza rótulos na memória (`labels`) associados ao comando de desvio incondicional `goto`, obrigando a leitura do código a saltar manualmente para cima e para baixo.
* **Por que é importante?** Na programação moderna orientada a objetos, o uso do `goto` é fortemente evitado por gerar códigos confusos ("código esparguete"). Porém, do ponto de vista académico e de arquitetura, é fundamental compreender esta estrutura. Na linguagem de máquina (Assembly), o processador não entende o que é um "while"; ele apenas executa instruções de salto (`JUMP`) baseadas em condições dos registradores. Este código simula em C exatamente o que a CPU faz por baixo dos panos.

---

## 🚀 Como Executar

Para compilar e testar qualquer uma das abordagens localmente, basta utilizar o GCC ou qualquer compilador C padrão no seu terminal:

```bash
# Exemplo para a versão iterativa:
gcc fatorial_iterativo.c -o fatorial_iterativo
./fatorial_iterativo
