// 

#include "pch.h"
#include <iostream>
using namespace std;

int main() {
    double a = 333.333333;
    cout.precision(6);
    cout << std::fixed;

    cout << a;

    return 0;
}