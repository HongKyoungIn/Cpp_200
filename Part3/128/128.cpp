// 128. 가변인자 템플릿 사용하기(typename... T)
#include "pch.h"
#include <iostream>

using namespace std;

void Type1(string msg, int no, double value) {
    cout << msg << ", 에러 번호 " << no << ", 오류값 " << value << endl;
}

void Type2(int no, double value) {
    cout << no << ", 오류값 " << value << endl;
}

template<typename... T>
void PrintLog(T... arg0) {
    // Type1(arg0...);
    Type2(arg0...);
}

int main() {
    // PrintLog<string, int, double>("Warnig", 100, 22.5);
    PrintLog<int, double>(101, 55.6);

    return 0;
}