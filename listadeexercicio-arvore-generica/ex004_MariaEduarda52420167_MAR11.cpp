#include <iostream>
#include <vector>
using namespace std;

struct No {
    int valor;
    vector<No*> filho;
};

void deletarSubarvore(No* no) {
    if (no == NULL) return;

    for (int i = 0; i < no->filho.size(); i++) {
        deletarSubarvore(no->filho[i]);
    }

    delete no;
}

bool remover(No* pai, int valor) {
    if (pai == NULL) return false;

    for (int i = 0; i < pai->filho.size(); i++) {
        if (pai->filho[i]->valor == valor) {
            deletarSubarvore(pai->filho[i]);
            pai->filho.erase(pai->filho.begin() + i);
            return true;
        }
    }

    for (int i = 0; i < pai->filho.size(); i++) {
        if (remover(pai->filho[i], valor)) {
            return true;
        }
    }

    return false;
}

void imprimirPreOrdem(No* no) {
    if (no == NULL) return;

    cout << no->valor << " ";

    for (int i = 0; i < no->filho.size(); i++) {
        imprimirPreOrdem(no->filho[i]);
    }
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

    imprimirPreOrdem(raiz);
    cout << endl;

    remover(raiz, 5);

    imprimirPreOrdem(raiz);
    cout << endl;

    deletarSubarvore(raiz);

    return 0;
}
