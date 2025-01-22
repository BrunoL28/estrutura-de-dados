#include "../include/fatorial.h"
#include "../include/utils.h"

unsigned long long factorial_recursive(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorial_recursive(n - 1);
}

unsigned long long factorial_recursive_workload(int n) {
    if (n == 0 || n == 1)
        return 1;
    computational_load();
    return n * factorial_recursive(n - 1);
}

unsigned long long factorial_iterative(int n) {
    unsigned long long result = 1;
    for (int i = 2; i <= n; i++)
        result *= i;
    return result;
}