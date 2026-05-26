#include <iostream>
#include <vector>
using namespace std;

struct No {
    int valor;
    vector<No*> filho;
};

int grauArvore(No* no) {
    if (no == NULL) return 0;

    int maior = no->filho.size();

    for (int i = 0; i < no->filho.size(); i++) {
        int temp = grauArvore(no->filho[i]);
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
    No* d = new No{30};
    No* e = new No{40};

    raiz->filho.push_back(a);
    raiz->filho.push_back(b);
    raiz->filho.push_back(e);
    a->filho.push_back(c);
    a->filho.push_back(d);

    cout << grauArvore(raiz);

    return 0;
}
