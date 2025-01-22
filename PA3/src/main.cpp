#include <iostream>
#include <chrono>
#include <cmath>
#include <cstdlib>
#include "../include/fatorial.h"
#include "../include/fibonacci.h"

using namespace std;
using namespace chrono;

int main(int argc, char* argv[]) {
    if (argc != 3) {
        cout << "Uso: " << argv[0] << " <fatorial/fibonacci> <n>" << endl;
        return 1;
    }

    string option = argv[1];
    int n = atoi(argv[2]);

    if (option == "fatorial") {
        auto start = high_resolution_clock::now();
        cout << "Fatorial Recursivo de " << n << " é " << factorial_recursive(n) << endl;
        auto stop = high_resolution_clock::now();
        cout << "Tempo Recursivo: " << duration_cast<microseconds>(stop - start).count() << " us" << endl;

        start = high_resolution_clock::now();
        cout << "Fatorial Iterativo de " << n << " é " << factorial_iterative(n) << endl;
        stop = high_resolution_clock::now();
        cout << "Tempo Iterativo: " << duration_cast<microseconds>(stop - start).count() << " us" << endl;
    } 
    else if (option == "fibonacci") {
        auto start = high_resolution_clock::now();
        cout << "Fibonacci Recursivo de " << n << " é " << fibonacci_recursive(n) << endl;
        auto stop = high_resolution_clock::now();
        cout << "Tempo Recursivo: " << duration_cast<microseconds>(stop - start).count() << " us" << endl;

        start = high_resolution_clock::now();
        cout << "Fibonacci Iterativo de " << n << " é " << fibonacci_iterative(n) << endl;
        stop = high_resolution_clock::now();
        cout << "Tempo Iterativo: " << duration_cast<microseconds>(stop - start).count() << " us" << endl;
    } 
    else {
        cout << "Opção inválida. Use 'fatorial' ou 'fibonacci'." << endl;
        return 1;
    }

    return 0;
}