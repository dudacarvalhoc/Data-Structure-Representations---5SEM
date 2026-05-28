#include <iostream>
using namespace std;

void vizinhos(int grafo[5][5], int vertice, int tamanho) {
    cout << "Vizinhos do vertice " << vertice << ": ";

    for(int i = 0; i < tamanho; i++) {
        if(grafo[vertice][i] == 1) {
            cout << i << " ";
        }
    }
}

int main() {

    int grafo[5][5] = {
        {0,1,1,0,0},
        {1,0,0,1,0},
        {1,0,0,1,1},
        {0,1,1,0,0},
        {0,0,1,0,0}
    };

    int vertice;

    cout << "Digite o vertice: ";
    cin >> vertice;

    vizinhos(grafo, vertice, 5);

    return 0;
}
