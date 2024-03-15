// 128. 가변인자 템플릿 예제1
#include "pch.h"
#include <iostream>

using namespace std;

// 가변 템플릿 함수
template<typename T, typename... Args>
void printArgs(T first, Args... args) {
    cout << first << " "; // 첫 번째 인수 출력
    if constexpr(sizeof...(args) > 0) { // 재귀 호출을 이용하여 다음 인수들을 처리
        printArgs(args...); // 다음 인수들에 대해 재귀 호출
    }
}

int main() {
    printArgs(1, 2, 3, 4, 5); // 가변 템플릿 함수 호출
    return 0;
}
