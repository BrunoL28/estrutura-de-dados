#include "../include/fibonacci.h"
#include "../include/utils.h"

unsigned long long fibonacci_recursive(int n) {
    if (n <= 1)
        return n;
    return fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2);
}

unsigned long long fibonacci_recursive_workload(int n) {
    if (n <= 1)
        return n;
    computational_load();
    return fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2);
}

unsigned long long fibonacci_iterative(int n) {
    if (n <= 1)
        return n;
    unsigned long long a = 0, b = 1, c;
    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}