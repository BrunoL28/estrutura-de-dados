#include "../include/Grafo.hpp"
#include <algorithm> // Para std::min e std::max
using std::min;
using std::max;

// Construtor: Inicializa o grafo vazio
Grafo::Grafo() {}

// Destrutor: Libera os recursos associados ao grafo
Grafo::~Grafo() {}

// Insere um novo vértice no grafo
void Grafo::InsereVertice() {
    vertices.Insere(-1); // Marca como sem arestas inicialmente
}

// Insere uma aresta entre os vértices v e w
void Grafo::InsereAresta(int v, int w) {
    vertices.Insere(v);
    vertices.Insere(w);
}

// Retorna a quantidade de vértices no grafo
int Grafo::QuantidadeVertices() {
    return vertices.Tamanho();
}

// Retorna a quantidade de arestas no grafo
int Grafo::QuantidadeArestas() {
    int totalArestas = 0;
    for (int i = 0; i < vertices.Tamanho(); ++i) {
        totalArestas += vertices.Grau(i);
    }
    return totalArestas / 2; // Divide por 2 pois cada aresta é contada duas vezes
}

// Retorna o grau mínimo do grafo
int Grafo::GrauMinimo() {
    int grauMin = vertices.Tamanho();
    for (int i = 0; i < vertices.Tamanho(); ++i) {
        grauMin = min(grauMin, vertices.Grau(i));
    }
    return grauMin;
}

// Retorna o grau máximo do grafo
int Grafo::GrauMaximo() {
    int grauMax = 0;
    for (int i = 0; i < vertices.Tamanho(); ++i) {
        grauMax = max(grauMax, vertices.Grau(i));
    }
    return grauMax;
}

// Imprime os vizinhos do vértice v
void Grafo::ImprimeVizinhos(int v) {
    vertices.Imprime();
}
