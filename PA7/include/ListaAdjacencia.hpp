#ifndef LISTAADJACENCIA_HPP
#define LISTAADJACENCIA_HPP

#include <iostream>
using namespace std;

// Estrutura para representar um nó na lista encadeada
struct No {
    int vertice;
    No* prox;
    No(int v) : vertice(v), prox(nullptr) {}
};

// Classe para a lista de adjacência
class ListaAdjacencia {
public:
    No* inicio;

    // Construtor
    ListaAdjacencia();

    // Destrutor
    ~ListaAdjacencia();

    // Insere um vértice na lista de adjacência
    void Insere(int vertice);

    // Imprime os vértices na lista de adjacência
    void Imprime();

    // Retorna o tamanho da lista de adjacência
    int Tamanho();

    // Retorna o grau do vértice
    int Grau(int vertice);
};

#endif // LISTAADJACENCIA_HPP