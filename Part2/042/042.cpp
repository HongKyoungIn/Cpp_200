// 042. 반복문을 이용하여 피라미드 출력하기!

#include "pch.h"
#include <iostream>
using namespace std;

int main() {
    int num;

    cin >> num;

    for(int i = 0; i < num; i++) {
        for(int j = 1; j < num-i; j++) {
            cout << " ";
        }

        for(int k = 0; k < (i * 2) + 1; k++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}