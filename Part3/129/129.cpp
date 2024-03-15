// 129. 가변인자 함수 사용하기(C언어 스타일)

#include "pch.h"
#include <iostream>
#include <stdarg.h>

using namespace std;

int Sum(int arg, ...) {
    // 가변 인자의 주소를 가리킵니다.
    // ap 포인터 형태이며 va_start에 인자로 전달되어야 실제 주소값을 보유하게 됩니다.
    // ap는 가변인자가 총 몇 개인지 나타내는 용도로 쓰입니다.
    va_list ap; 
    va_start(ap, arg); // 첫 번째 가변인수 위치를 찾아 시작 번지를 알아냅니다.(포인터 형태)

    int sum = 0;

    for(int i = 0; i < arg; i++) {
        sum += va_arg(ap, int); // va_list가 가리키는 위치의 값을 읽어내 리턴합니다.
    }

    va_end(ap); // va_list를 초기화하여 가변인자 사용이 끝났음을 알립니다.

    return sum;
}

int main() {
    int number = Sum(5, 1, 2, 3, 4, 5);

    cout << "1에서 5까지 합 : " << number << endl;

    return 0;
}