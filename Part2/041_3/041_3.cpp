#include "pch.h"
#include <iostream>

void printFibonacci(int n) {
    for(int i = 1; i <= n; i++) {
        int a = 1, b = 1;
        std::cout << a;
        if(i == 1) {
            std::cout << "\n";
            continue;
        }

        std::cout << ", " << b;
        for(int j = 3; j <= i; j++) {
            int temp = a;
            a = b;
            b = temp + b;
            std::cout << ", " << b;
        }
        std::cout << "\n";
    }
}

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    printFibonacci(n);
    return 0;
}
