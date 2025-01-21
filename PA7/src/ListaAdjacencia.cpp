#include "../include/ListaAdjacencia.hpp"

// Implementação dos métodos de ListaAdjacencia
ListaAdjacencia::ListaAdjacencia() : inicio(nullptr) {}

ListaAdjacencia::~ListaAdjacencia() {
    No* atual = inicio;
    while (atual != nullptr) {
        No* temp = atual;
        atual = atual->prox;
        delete temp;
    }
}

void ListaAdjacencia::Insere(int vertice) {
    No* novo = new No(vertice);
    novo->prox = inicio;
    inicio = novo;
}

void ListaAdjacencia::Imprime() {
    No* atual = inicio;
    while (atual != nullptr) {
        cout << atual->vertice << " ";
        atual = atual->prox;
    }
    cout << endl;
}

int ListaAdjacencia::Tamanho() {
    int tamanho = 0;
    No* atual = inicio;
    while (atual != nullptr) {
        tamanho++;
        atual = atual->prox;
    }
    return tamanho;
}

int ListaAdjacencia::Grau(int vertice) {
    int grau = 0;
    No* atual = inicio;
    while (atual != nullptr) {
        if (atual->vertice == vertice) {
            grau++;
        }
        atual = atual->prox;
    }
    return grau;
}

