#include "heap.hpp"
#include <iostream>
#include <stdexcept>

const int MAXSIZE = 100; // Defina um valor constante para maxsize

Heap::Heap(int maxsize) {
    tamanho = 0;
    data = new int[maxsize];
}

Heap::~Heap() {
    delete[] data;
}

void Heap::Inserir(int x) {
    if (tamanho == MAXSIZE) {
        throw std::overflow_error("Heap está cheio");
    }
    data[tamanho] = x;
    HeapifyPorCima(tamanho);
    tamanho++;
}

int Heap::Remover() {
    if (Vazio()) {
        throw std::underflow_error("Heap está vazio");
    }
    int root = data[0];
    data[0] = data[--tamanho];
    HeapifyPorBaixo(0);
    return root;
}

bool Heap::Vazio() {
    return tamanho == 0;
}

int Heap::GetAncestral(int posicao) {
    return (posicao - 1) / 2;
}

int Heap::GetSucessorEsq(int posicao) {
    return 2 * posicao + 1;
}

int Heap::GetSucessorDir(int posicao) {
    return 2 * posicao + 2;
}

void Heap::HeapifyPorBaixo(int posicao) {
    int esq = GetSucessorEsq(posicao);
    int dir = GetSucessorDir(posicao);
    int menor = posicao;

    if (esq < tamanho && data[esq] < data[menor]) {
        menor = esq;
    }
    if (dir < tamanho && data[dir] < data[menor]) {
        menor = dir;
    }
    if (menor != posicao) {
        std::swap(data[posicao], data[menor]);
        HeapifyPorBaixo(menor);
    }
}

void Heap::HeapifyPorCima(int posicao) {
    while (posicao > 0 && data[GetAncestral(posicao)] > data[posicao]) {
        std::swap(data[posicao], data[GetAncestral(posicao)]);
        posicao = GetAncestral(posicao);
    }
}