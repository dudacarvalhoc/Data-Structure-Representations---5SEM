#include <iostream>
#include <vector>

using namespace std;

void vizinhos(vector<int> lista[], int vertice) {

    cout << "Vizinhos do vertice " << vertice << ": ";

    for(int i = 0; i < lista[vertice].size(); i++) {

        cout << lista[vertice][i] << " ";
    }
}

int main() {

    vector<int> lista[5];

    lista[0].push_back(1);
    lista[0].push_back(2);

    lista[1].push_back(0);
    lista[1].push_back(3);

    lista[2].push_back(0);
    lista[2].push_back(3);
    lista[2].push_back(4);

    lista[3].push_back(1);
    lista[3].push_back(2);

    lista[4].push_back(2);

    int vertice;

    cout << "Digite o vertice: ";
    cin >> vertice;

    vizinhos(lista, vertice);

    return 0;
}
