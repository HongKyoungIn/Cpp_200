﻿// 066. 문자열 뒤집기(reverse)

#include "pch.h"
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string str = "gfedcba";

    reverse(str.begin(), str.end());

    cout << str << endl;

    return 0;
}