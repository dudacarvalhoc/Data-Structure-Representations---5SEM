#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct No {
    int valor;
    vector<No*> filho;
};

int contarNivel(No* raiz, int k) {
    if (raiz == NULL) return 0;

    queue<No*> fila;
    fila.push(raiz);

    int nivel = 0;

    while (!fila.empty()) {
        int tamanho = fila.size();

        if (nivel == k) {
            return tamanho;
        }

        for (int i = 0; i < tamanho; i++) {
            No* atual = fila.front();
            fila.pop();

            for (int j = 0; j < atual->filho.size(); j++) {
                fila.push(atual->filho[j]);
            }
        }

        nivel++;
    }

    return 0;
}

int main() {
    No* raiz = new No{10};
    No* a = new No{5};
    No* b = new No{20};
    No* c = new No{15};
    No* d = new No{30};

    raiz->filho.push_back(a);
    raiz->filho.push_back(b);
    a->filho.push_back(c);
    a->filho.push_back(d);

    cout << contarNivel(raiz, 2);

    return 0;
}
