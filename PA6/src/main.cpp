#include "../include/heap.hpp"
#include <iostream>

int main() {
    int n;
    std::cin >> n;

    Heap heap(n);

    for (int i = 0; i < n; ++i) {
        int element;
        std::cin >> element;
        heap.Inserir(element);
    }

    for (int i = 0; i < n; ++i) {
        std::cout << heap.Remover() << " ";
    }
    std::cout << std::endl;

    return 0;
}