// 053. 문자열 비교하기(string.compare)!

#include "pch.h"
#include <iostream>

using namespace std;

int main() {
    string seven_war = "임진왜란";
    string korea_war = "한국전쟁";

    if(seven_war.compare(korea_war) == 0) {
        cout << "같은 문자열입니다." << endl;
    }
    else {
        cout << "다른 문자열입니다." << endl;
    }

    return 0;
}
// 다른 방법 1 : strcmp로 비교하기
// 다른 방법 2 : ==, !=로 비교하기