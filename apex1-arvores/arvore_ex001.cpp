#include <iostream>
#include <vector>
#include <stack>

using namespace std;

struct No {
    char data;
    vector<No*> filho;
};
void DFS(No* raiz) {
    if (raiz == NULL) {
        return;
    }

    stack<No*> pilha;
    pilha.push(raiz);

    while (!pilha.empty()) {
        No* atual = pilha.top();
        pilha.pop();

        cout << atual->data << " ";

        for (int i = atual->filho.size() - 1; i >= 0; i--) {
            pilha.push(atual->filho[i]);
        }
    }
}

int main() {
    No* A = new No{'A'};
    No* B = new No{'B'};
    No* C = new No{'C'};
    No* D = new No{'D'};
    No* E = new No{'E'};
    No* F = new No{'F'};
    No* G = new No{'G'};
    No* H = new No{'H'};

    A->filho.push_back(B);
    A->filho.push_back(C);
    A->filho.push_back(D);

    C->filho.push_back(E);

    D->filho.push_back(F);

    F->filho.push_back(G);
    F->filho.push_back(H);

    cout << "Percurso DFS: ";
    DFS(A);

    cout << endl;

    return 0;
}