#include "../include/Grafo.hpp"
#include "../include/ListaAdjacencia.hpp"
#include <iostream>
#include <string>

using namespace std;

bool GrafoCompleto(Grafo& grafo) {
    int n = grafo.QuantidadeVertices();
    for (int i = 0; i < n; ++i) {
        if (grafo.GrauMaximo() != n - 1) {
            return false;
        }
    }
    return true;
}

int main(int argc, char* argv[]) {
    if (argc < 2) {
        cerr << "Operação não especificada." << endl;
        return 1;
    }

    string operacao = argv[1];
    Grafo grafo;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        grafo.InsereVertice();
        int m;
        cin >> m;
        for (int j = 0; j < m; j++) {
            int vizinho;
            cin >> vizinho;
            grafo.InsereAresta(i, vizinho);
        }
    }

    if (operacao == "-d") {
        cout << grafo.QuantidadeVertices() << endl;
        cout << grafo.QuantidadeArestas() << endl;
        cout << grafo.GrauMinimo() << endl;
        cout << grafo.GrauMaximo() << endl;
    } else if (operacao == "-n") {
        for (int i = 0; i < grafo.QuantidadeVertices(); i++) {
            grafo.ImprimeVizinhos(i);
        }
    } else if (operacao == "-k") {
        cout << (GrafoCompleto(grafo) ? 1 : 0) << endl;
    } else {
        cerr << "Operação inválida." << endl;
        return 1;
    }

    return 0;
}
