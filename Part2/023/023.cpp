﻿// 023. 증감 연산자 이해하기(++, --)!

#include "pch.h"
#include <iostream>
using namespace std;

int main() {
    int x = 1;

    cout << "x = " << x++ << endl;
    cout << "x = " << x++ << endl;
    cout << "x = " << ++x << endl;
    cout << "x = " << x-- << endl;
    cout << "x = " << x-- << endl;
    cout << "x = " << --x << endl;

    return 0;
}