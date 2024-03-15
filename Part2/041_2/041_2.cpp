// 041. 피보나치 수열 만들기(방법2)
#include "pch.h"
#include <iostream>

void printFibonacci(int n) {
    int a = 1, b = 1;
    std::cout << "1\n";
    if(n == 1) return;

    std::cout << "1, 1\n";
    if(n == 2) return;

    for(int i = 3; i <= n; i++) {
        int temp = a;
        a = b;
        b = temp + b;

        std::cout << "1, 1";
        int x = 1, y = 1;
        for(int j = 3; j <= i; j++) {
            int z = x + y;
            std::cout << ", " << z;
            x = y;
            y = z;
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
