﻿// 007. 자료형 이해하기(char, int, double, bool, string)

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
    char character = 'C';
    int integer = 100;
    double precision = 3.141592;
    bool is_true = true;
    string word = "Hello World";

    cout << "char : " << character << endl;
    cout << "int : " << integer << endl;
    cout << "double : " << precision << endl;
    cout << "bool : " << is_true << endl;
    cout << "string : " << word << endl;

    return 0;
}