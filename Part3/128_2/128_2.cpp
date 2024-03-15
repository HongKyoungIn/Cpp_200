// 128. 가변인자 템플릿 예제2

#include "pch.h"
#include <iostream>

using namespace std;

template<typename T>
auto print(T arg) {
    cout << arg << endl;
}

template<typename T, typename... Types>
void print(T arg, Types... args) {
    cout << arg;
    print(args...);
}

// C++14에서의 사용 예시
auto add(int a, int b) {
    return a + b;
}


int main() {
    print(5); // 1번 print를 호출
    print(1, 2, 3, 4, 5); // 2번 프린트를 호출
    print(1, 2, 3); // 2번 프린트를 호출

    return 0;
}