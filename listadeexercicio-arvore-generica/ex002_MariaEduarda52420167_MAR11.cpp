#include <iostream>
#include <vector>
using namespace std;

struct No {
    int valor;
    vector<No*> filho;
};

int maior_valor(No* no) {
    if (no == NULL) return -999999;

    int maior = no->valor;

    for (int i = 0; i < no->filho.size(); i++) {
        int temp = maior_valor(no->filho[i]);
        if (temp > maior) {
            maior = temp;
        }
    }

    return maior;
}

int main() {
    No* raiz = new No{10};
    No* a = new No{5};
    No* b = new No{20};
    No* c = new No{15};

    raiz->filho.push_back(a);
    raiz->filho.push_back(b);
    a->filho.push_back(c);

    cout << maior_valor(raiz);

    return 0;
}
