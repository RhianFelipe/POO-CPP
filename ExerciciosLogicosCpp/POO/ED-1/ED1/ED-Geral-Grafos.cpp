#include <iostream>
using namespace std;

class Grafos {
    //obs:Utilizei uma implementacao diferente que eu tinha visto e achei interessante.

    bool** adjMatriz;
    int numVertices = 0;

public:
    //Constructor
    Grafos(int numVertices) {
        this->numVertices = numVertices;
        adjMatriz = new bool*[numVertices];
        for (int i = 0; i < numVertices; i++) {
            adjMatriz[i] = new bool[numVertices];
            for (int j = 0; j < numVertices; j++)
                adjMatriz[i][j] = false;
        }
    }

    // Adiciona aresta
    void addAresta(int i, int j) {
        adjMatriz[i][j] = true;
        adjMatriz[j][i] = true;
    }

    // Remove aresta
    void removeAresta(int i, int j) {
        adjMatriz[i][j] = false;
        adjMatriz[j][i] = false;
    }

//Mostra a Matriz de adjacência do grafo
    void mostra() {
        cout << "----";
        for (int i = 0; i < numVertices; i++) {
            cout << i << " ";
        }
        cout << "\n";
        for (int i = 0; i < numVertices; i++) {

            cout << i << " : ";
            for (int j = 0; j < numVertices; j++)
                cout << adjMatriz[i][j] << " ";
            cout << "\n";
        }
    }
    //verifica se as vertices sao vizinhas
    void compare(int i, int j) {
        if( adjMatriz[i][j] == 1) {
            cout << "\nAs vertices " << i <<  " e " << j << " sao vizinhas\n";


        } else {
            cout << "\nAs vertices " << i <<  " e " << j << " nao sao vizinhas\n";

        }
    }

};

int main() {
    Grafos g(4);

    g.addAresta(0, 2);
    g.addAresta(0, 3);
    g.addAresta(2, 0);
    g.addAresta(2, 3);

    g.mostra();
    g.compare(0,0);

    g.addAresta(0, 0);

    g.compare(0,0);


    g.addAresta(1, 3);
    g.addAresta(3, 3);
    g.addAresta(1, 1);
    g.mostra();
}
