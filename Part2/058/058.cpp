// 058. 문자열 중간에 문자열 추가하기(insert)!

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
    string sentence = "I coding";
    sentence.insert(2, "hate ");
    cout << sentence << endl;

    sentence.insert(7, "or like ");
    cout << sentence << endl;

    return 0;
}
// 문자열의 인덱스는 0부터 시작한다. (I - 0, 띄어쓰기 - 1, c - 2 ...)