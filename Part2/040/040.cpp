// 040. 반복문을 이용하여 구구단(15단) 출력하기!

#include "pch.h"
#include <iostream>
using namespace std;

int main() {
    int num = 0;

    cin >> num;

    for(int i = 1; i < num + 1; i++) {
        for(int j = 1; j < 10; j++) {
            cout << i << " * " << j << " = " << i * j << endl;
        }
    }

    return 0;
}