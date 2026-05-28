# 📊 APEX - Lista de Exercícios de Grafos
 
Atividade do 2º Bimestre da disciplina **APEX**, abordando conceitos fundamentais de **Teoria dos Grafos** e implementação em **C++**.
 
## 📚 Sobre o projeto
 
Este repositório contém a resolução completa da lista de exercícios sobre grafos, incluindo:
 
- Representação de grafos (orientados e não orientados)
- Matriz e lista de adjacência
- Grau de entrada e saída
- Conectividade
- Caminhos simples e ciclos
- Algoritmo de **Dijkstra** para caminho mínimo
## 🗂️ Estrutura do repositório
 
```
📦 APEX-Grafos
 ┣ 📄 README.md
 ┣ 📄 APEX-2ºBIMESTRE_GRAFOS_MARIAEDUARDA.pdf   ← Resolução teórica
 ┣ 📄 ex006_grafos_MariaEduarda52420167.cpp     ← Vizinhos via matriz
 ┣ 📄 ex007_grafos_MariaEduarda52420167.cpp     ← Vizinhos via lista
 ┗ 📄 ex008_dijkstra_grafos_MariaEduarda52420167.cpp ← Dijkstra
```
 
## 📝 Exercícios resolvidos
 
### Parte teórica (PDF)
 
| Exercício | Tema |
|-----------|------|
| 1 | Desenho de grafo não orientado e dígrafo |
| 2 | Matrizes de adjacência |
| 3 | Caminhos, ciclos, graus e representações de dígrafo |
| 4 | Comunicação entre turistas (aplicação de dígrafos) |
| 8 (a–d) | Aplicação manual do algoritmo de Dijkstra |
 
### Parte prática (C++)
 
| Exercício | Descrição |
|-----------|-----------|
| 6 | Função que retorna vizinhos de um vértice em grafo por **matriz de adjacência** |
| 7 | Função que retorna vizinhos de um vértice em grafo por **lista de adjacência** |
| 8 (e–f) | Implementação do algoritmo de **Dijkstra** com exibição do caminho percorrido |
 
## 💻 Como executar os códigos C++
 
### Pré-requisitos
- Compilador C++ (Dev C++, g++, Code::Blocks, etc.)
### Compilação e execução
 
**No Dev C++:** abra o arquivo `.cpp`, pressione `F9` para compilar e `F10` para executar.
 
**Via terminal (g++):**
```bash
g++ ex006_grafos_MariaEduarda52420167.cpp -o ex006
./ex006
```
 
## 🎯 Exemplo de saída — Exercício 8 (Dijkstra)
 
```
Menores distancias a partir do vertice A:
 
Ate o vertice 0: 0  | Caminho: 0
Ate o vertice 1: 3  | Caminho: 0 -> 2 -> 1
Ate o vertice 2: 2  | Caminho: 0 -> 2
Ate o vertice 3: 8  | Caminho: 0 -> 2 -> 1 -> 3
Ate o vertice 4: 10 | Caminho: 0 -> 2 -> 1 -> 3 -> 4
Ate o vertice 5: 13 | Caminho: 0 -> 2 -> 1 -> 3 -> 4 -> 5
```
 
Legenda dos vértices: `0=A, 1=B, 2=C, 3=D, 4=E, 5=F`
 
## 🧠 Grafo ponderado utilizado no Exercício 8
 
| Aresta | Peso |
|--------|------|
| A – B  | 4    |
| A – C  | 2    |
| B – C  | 1    |
| B – D  | 5    |
| C – D  | 8    |
| C – E  | 10   |
| D – E  | 2    |
| D – F  | 6    |
| E – F  | 3    |
 
**Caminho mínimo de A até F:** `A → C → B → D → E → F` (custo total: **13**)
 
## 🛠️ Tecnologias utilizadas
 
- **C++** — implementação dos algoritmos
- **Dev C++** — IDE para desenvolvimento
- **Markdown** — documentação
## 👩‍💻 Autora
 
**Maria Eduarda**
RA: 52420167
 
---
 
> Projeto desenvolvido para a disciplina **APEX — 2º Bimestre**
