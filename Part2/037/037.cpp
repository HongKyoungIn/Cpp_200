// 037. 조건 선택문 이해하기(switch ~ case ~ default)!
// 백준 시험 성적 - 9498 문제 참조

#include "pch.h"
#include <iostream>
using namespace std;

int main() {
    int score;
    int num;

    cin >> score;

    num = score / 10;

    switch(num) {
    case 10:
        cout << "A" << endl;
        break;
    case 9:
        cout << "A" << endl;
        break;
    case 8:
        cout << "B" << endl;
        break;
    case 7:
        cout << "C" << endl;
        break;
    case 6:
        cout << "D" << endl;
        break;
    default:
        cout << "F" << endl;
        break;
    }

    return 0;
}