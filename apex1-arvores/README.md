# 🌲 Árvores Avançadas — Percursos e Balanceamento
 
**Disciplina:** Representações de Estruturas de Dados
**Aluna:** Maria Eduarda Cortellini — RA `52420167`
**Linguagem:** C++
 
---
 
## 🎯 Sobre
 
Exercícios envolvendo técnicas mais avançadas de manipulação de árvores: **percurso em profundidade iterativo (DFS)** com pilha e **árvore AVL** com balanceamento automático via rotações.
 
---
 
## 📋 Exercícios
 
| # | Arquivo | Tema | Estrutura |
|---|---------|------|-----------|
| 01 | `arvore_ex001.cpp` | Percurso DFS iterativo | Árvore n-ária + `stack` |
| 02 | `arvore_ex002.cpp` | Árvore AVL (auto-balanceada) | Árvore binária + rotações |
 
---
 
### 🔄 Exercício 01 — DFS iterativo
 
Implementa a **busca em profundidade (DFS)** de forma **iterativa**, usando uma `stack` (pilha) ao invés de recursão.
 
**Estrutura usada:**
```cpp
struct No {
    char data;
    vector<No*> filho;
};
```
 
**Lógica:**
1. Empilha a raiz
2. Enquanto a pilha não estiver vazia: desempilha, imprime e empilha os filhos **em ordem reversa** (para que sejam visitados da esquerda para a direita)
**Árvore montada no exemplo:**
```
        A
      / | \
     B  C  D
        |  |
        E  F
          / \
         G   H
```
 
**Saída esperada:** `A B C E D F G H`
 
---
 
### ⚖️ Exercício 02 — Árvore AVL
 
Implementa uma **árvore AVL** completa: árvore binária de busca que se **auto-balanceia** após cada inserção, garantindo altura logarítmica.
 
**Estrutura usada:**
```cpp
struct No {
    int valor;
    No* esq;
    No* dir;
    int altura;
};
```
 
**Funções implementadas:**
 
| Função | O que faz |
|--------|-----------|
| `altura(No*)` | Retorna a altura armazenada no nó |
| `fb(No*)` | Calcula o **fator de balanceamento** (altura esq − altura dir) |
| `novoNo(int)` | Cria um novo nó com altura 1 |
| `rotacaoDireita(No*)` | Rotação simples à direita |
| `rotacaoEsquerda(No*)` | Rotação simples à esquerda |
| `inserir(No*, int)` | Insere um valor e rebalanceia se necessário |
| `emOrdem(No*)` | Percurso em ordem (esq → raiz → dir) |
| `mostrarArvore(No*)` | Imprime a árvore em formato hierárquico |
 
**Tipos de rotação aplicados:**
 
| Caso | Quando acontece | Solução |
|------|-----------------|---------|
| 🔴 **LL** | FB > 1 e valor < esq | Rotação à direita |
| 🔵 **RR** | FB < -1 e valor > dir | Rotação à esquerda |
| 🟡 **LR** | FB > 1 e valor > esq | Rotação esq + Rotação dir |
| 🟢 **RL** | FB < -1 e valor < dir | Rotação dir + Rotação esq |
 
**Sequência de inserção no exemplo:** `50, 30, 70, 20, 40, 10`
 
---
 
## ▶️ Como compilar e executar
 
```bash
# Compilar
g++ arvore_ex001.cpp -o arvore_ex001
g++ arvore_ex002.cpp -o arvore_ex002
 
# Executar
./arvore_ex001
./arvore_ex002
```
 
No Windows:
```bash
g++ arvore_ex001.cpp -o arvore_ex001.exe
arvore_ex001.exe
```
 
---
 
## 📁 Estrutura da pasta
 
```
arvores-avancadas/
├── README.md
├── arvore_ex001.cpp     ← DFS iterativo
└── arvore_ex002.cpp     ← Árvore AVL
```
