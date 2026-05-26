#include <iostream>
#include <vector>
using namespace std;

struct No {
    vector<No*> filho;
};

int contarFolhas(No* no) {
    if (no == NULL) return 0;

    int contador = 0;

    if (no->filho.empty()) {
        contador++;
    }

    for (int i = 0; i < no->filho.size(); i++) {
        contador += contarFolhas(no->filho[i]);
    }

    return contador;
}

int main() {
    No* raiz = new No();
    No* a = new No();
    No* b = new No();
    No* c = new No();

    raiz->filho.push_back(a);
    raiz->filho.push_back(b);
    a->filho.push_back(c);

    cout << contarFolhas(raiz);

    return 0;
}
