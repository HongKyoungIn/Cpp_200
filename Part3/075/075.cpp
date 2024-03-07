// 075. Call by Reference 이해하기;

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

void Func1(int &arg) {
    cout << "변경 전 : " << arg << endl;
    arg += 10;
    cout << "변경 후 : " << arg << endl;
}

void Func2(string &info) {
    info += "981년";
}

int main() {
    int year = 10;

    Func1(year);

    cout << "함수 종료 후 : " << year << endl;

    string king_info = "고려 성종 즉위년 : ";

    Func2(king_info);

    cout << king_info << endl;

    return 0;
}
// Func1 함수는 인자를 복사해 사용하지 않고 인자의 주소를 가리키는 포인터를 사용합니다.
// 따라서 포인터가 가리키는 곳, 즉 주소의 값을 직접 변경하여 year의 값이 변경됩니다.