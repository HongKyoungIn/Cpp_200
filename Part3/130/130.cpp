// 130. 인라인 함수 사용하기(inline)

#include "pch.h"
#include <iostream>

using namespace std;

inline int Max(int x, int y) {
    return x > y ? x : y;
}

int main() {
    for(int i = 0; i < 5; i++) {
        cout << Max(i, i + 10) << endl;
    }

    return 0;
}

/*
자주 사용되며 코드가 짧은 함수라면 인라인 함수를 사용하는게 좋다.
inline으로 선언된 함수는 컴파일 단계에서 소스가 그대로 복사되어 호출 지점에 삽입됩니다.
*/