#include <iostream>
#include <algorithm>

using namespace std;

struct No {
    int valor;
    No* esq;
    No* dir;
    int altura;
};

int altura(No* n) {
    if (n == NULL) {
        return 0;
    }
    return n->altura;
}

int maximo(int a, int b) {
    return (a > b) ? a : b;
}

No* novoNo(int valor) {
    No* no = new No();
    no->valor = valor;
    no->esq = NULL;
    no->dir = NULL;
    no->altura = 1;
    return no;
}

int fb(No* n) {
    if (n == NULL) {
        return 0;
    }
    return altura(n->esq) - altura(n->dir);
}

No* rotacaoDireita(No* y) {
    No* x = y->esq;
    No* T2 = x->dir;

    x->dir = y;
    y->esq = T2;

    y->altura = 1 + maximo(altura(y->esq), altura(y->dir));
    x->altura = 1 + maximo(altura(x->esq), altura(x->dir));

    return x;
}

No* rotacaoEsquerda(No* x) {
    No* y = x->dir;
    No* T2 = y->esq;

    y->esq = x;
    x->dir = T2;

    x->altura = 1 + maximo(altura(x->esq), altura(x->dir));
    y->altura = 1 + maximo(altura(y->esq), altura(y->dir));

    return y;
}

No* inserir(No* raiz, int valor) {
    if (raiz == NULL) {
        return novoNo(valor);
    }

    if (valor < raiz->valor) {
        raiz->esq = inserir(raiz->esq, valor);
    } else if (valor > raiz->valor) {
        raiz->dir = inserir(raiz->dir, valor);
    } else {
        return raiz;
    }

    raiz->altura = 1 + maximo(altura(raiz->esq), altura(raiz->dir));

    int balanceamento = fb(raiz);

    if (balanceamento > 1 && valor < raiz->esq->valor) {
        cout << "Rotacao LL aplicada no no " << raiz->valor << endl;
        return rotacaoDireita(raiz);
    }

    if (balanceamento < -1 && valor > raiz->dir->valor) {
        cout << "Rotacao RR aplicada no no " << raiz->valor << endl;
        return rotacaoEsquerda(raiz);
    }

    if (balanceamento > 1 && valor > raiz->esq->valor) {
        cout << "Rotacao LR aplicada no no " << raiz->valor << endl;
        raiz->esq = rotacaoEsquerda(raiz->esq);
        return rotacaoDireita(raiz);
    }

    if (balanceamento < -1 && valor < raiz->dir->valor) {
        cout << "Rotacao RL aplicada no no " << raiz->valor << endl;
        raiz->dir = rotacaoDireita(raiz->dir);
        return rotacaoEsquerda(raiz);
    }

    return raiz;
}

void emOrdem(No* raiz) {
    if (raiz != NULL) {
        emOrdem(raiz->esq);
        cout << raiz->valor << " ";
        emOrdem(raiz->dir);
    }
}

void mostrarArvore(No* raiz, int espaco = 0) {
    if (raiz == NULL) {
        return;
    }

    espaco += 5;

    mostrarArvore(raiz->dir, espaco);

    cout << endl;
    for (int i = 5; i < espaco; i++) {
        cout << " ";
    }
    cout << raiz->valor << endl;

    mostrarArvore(raiz->esq, espaco);
}

int main() {
    No* raiz = NULL;

    int valores[] = {50, 30, 70, 20, 40, 10};
    int tamanho = 6;

    for (int i = 0; i < tamanho; i++) {
        cout << "Inserindo " << valores[i] << "..." << endl;
        raiz = inserir(raiz, valores[i]);
    }

    cout << "\nArvore em ordem: ";
    emOrdem(raiz);
    cout << endl;

    cout << "\nArvore em formato hierarquico:\n";
    mostrarArvore(raiz);

    return 0;
}