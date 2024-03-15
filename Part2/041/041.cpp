// 041. 피보나치 수열 만들기!

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
    int p = 0; // 이전 값
    int n = 0; // 현재 값
    int t = 0; // 임시 저장변수

    for(int i = 1; i < 10; i++) {
        p = 0;
        n = 1;

        for(int j = 1; j <= i; j++) {
            cout << n << ", ";

            t = n; // 1, 1, 2, 3, 5
            n = n + p; // 1, 2, 3, 5, 8
            p = t; // 1, 1, 2, 3, 5
        }
        cout << endl;
    }

    return 0;
}