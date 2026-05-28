#include <iostream>

using namespace std;

#define V 6
#define INF 999999

int menorDistancia(int dist[], bool visitado[]) {

    int menor = INF;
    int indice;

    for(int i = 0; i < V; i++) {

        if(visitado[i] == false && dist[i] <= menor) {

            menor = dist[i];
            indice = i;
        }
    }

    return indice;
}

void imprimirCaminho(int anterior[], int j) {

    if(anterior[j] == -1) {

        cout << j;
        return;
    }

    imprimirCaminho(anterior, anterior[j]);

    cout << " -> " << j;
}

void dijkstra(int grafo[V][V], int origem) {

    int dist[V];
    bool visitado[V];
    int anterior[V];

    for(int i = 0; i < V; i++) {

        dist[i] = INF;
        visitado[i] = false;
        anterior[i] = -1;
    }

    dist[origem] = 0;

    for(int cont = 0; cont < V - 1; cont++) {

        int u = menorDistancia(dist, visitado);

        visitado[u] = true;

        for(int v = 0; v < V; v++) {

            if(!visitado[v] &&
               grafo[u][v] &&
               dist[u] != INF &&
               dist[u] + grafo[u][v] < dist[v]) {

                dist[v] = dist[u] + grafo[u][v];

                anterior[v] = u;
            }
        }
    }

    cout << "Menores distancias a partir do vertice A:\n\n";

    for(int i = 0; i < V; i++) {

        cout << "Ate o vertice " << i << ": ";

        cout << dist[i] << " | Caminho: ";

        imprimirCaminho(anterior, i);

        cout << endl;
    }
}

int main() {

    int grafo[V][V] = {

        {0,4,2,0,0,0},
        {4,0,1,5,0,0},
        {2,1,0,8,10,0},
        {0,5,8,0,2,6},
        {0,0,10,2,0,3},
        {0,0,0,6,3,0}
    };

    dijkstra(grafo, 0);

    return 0;
}
