# 🌳 Representações de Estruturas de Dados — Árvores N-árias
 
**Disciplina:** Representações de Estruturas de Dados
**Aluna:** Maria Eduarda Cortellini — RA `52420167`
**Turma:** MAR11
**Linguagem:** C++
 
---
 
## 🎯 Sobre
 
Conjunto de exercícios sobre **árvores n-árias** (árvores genéricas, onde cada nó pode ter um número arbitrário de filhos), implementados em C++ usando `struct` e `vector` para representação dos nós.
 
---
 
## 🧩 Estrutura base
 
Todos os exercícios usam a mesma representação de nó:
 
```cpp
struct No {
    int valor;              // valor armazenado no nó
    vector<No*> filho;      // lista de ponteiros para os filhos
};
```
 
---
 
## 📋 Exercícios
 
| # | Arquivo | Tema | Técnica |
|---|---------|------|---------|
| 01 | `ex001_MariaEduarda52420167_MAR11.cpp` | Contar folhas | Recursão (DFS) |
| 02 | `ex002_MariaEduarda52420167_MAR11.cpp` | Maior valor | Recursão (DFS) |
| 03 | `ex003_MariaEduarda52420167_MAR11.cpp` | Contar nós em um nível | BFS com `queue` |
| 04 | `ex004_MariaEduarda52420167_MAR11.cpp` | Remover nó e subárvore | Recursão + `vector::erase` |
| 05 | `ex005_MariaEduarda52420167_MAR11.cpp` | Grau da árvore | Recursão (DFS) |
 
---
 
### 🌱 Exercício 01 — Contar folhas
 
Conta quantos nós **folha** (sem filhos) existem na árvore.
 
- Função principal: `int contarFolhas(No* no)`
- Estratégia: percorre recursivamente; se o nó não tem filhos, incrementa o contador
### 🔝 Exercício 02 — Maior valor
 
Retorna o **maior valor** armazenado em qualquer nó da árvore.
 
- Função principal: `int maior_valor(No* no)`
- Estratégia: compara o valor atual com o maior valor de cada subárvore
### 📏 Exercício 03 — Contar nós em um nível `k`
 
Conta quantos nós existem em um determinado nível da árvore.
 
- Função principal: `int contarNivel(No* raiz, int k)`
- Estratégia: **BFS** (busca em largura) usando `queue`, processando nível por nível
### ❌ Exercício 04 — Remover nó
 
Remove um nó (e toda sua subárvore) a partir de um valor informado.
 
- Funções principais:
  - `bool remover(No* pai, int valor)` — busca e remove
  - `void deletarSubarvore(No* no)` — libera memória recursivamente
  - `imprimirPreOrdem(No* no)` — para verificar antes/depois da remoção
- Estratégia: busca recursiva + `vector::erase` para remover do vetor de filhos
### 📊 Exercício 05 — Grau da árvore
 
Retorna o **maior grau** (número de filhos) entre todos os nós da árvore.
 
- Função principal: `int grauArvore(No* no)`
- Estratégia: compara o tamanho do vetor de filhos do nó atual com o maior grau das subárvores
---
 
## ▶️ Como compilar e executar
 
```bash
# Compilar
g++ ex001_MariaEduarda52420167_MAR11.cpp -o ex001
 
# Executar
./ex001
```
 
Para Windows:
```bash
g++ ex001_MariaEduarda52420167_MAR11.cpp -o ex001.exe
ex001.exe
```
 
---
 
## 📁 Estrutura da pasta
 
```
arvores-narias/
├── README.md
├── ex001_MariaEduarda52420167_MAR11.cpp
├── ex002_MariaEduarda52420167_MAR11.cpp
├── ex003_MariaEduarda52420167_MAR11.cpp
├── ex004_MariaEduarda52420167_MAR11.cpp
└── ex005_MariaEduarda52420167_MAR11.cpp
```
