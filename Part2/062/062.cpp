// 062. 문자열 일부 교체하기(replace)!

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
    string str = "I like coding";
    string find_str = "coding";
    string replace_str = "history";

    str.replace(str.find(find_str), find_str.length(), replace_str);

    cout << str << endl;

    return 0;
}