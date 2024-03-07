// 076. Call by Addrss 이해하기;

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

void Func1(bool *is_on) {
    cout << "Call by address : " << sizeof(is_on) << endl;
}

void Func2(bool &is_on) {
    cout << "Call by reference : " << sizeof(is_on) << endl;
}

int main() {
    bool is_tmp = true;

    Func1(&is_tmp); // 함수의 인자를 포인터로 받을 경우 주소를 명시적으로 전달해야 합니다.
    Func2(is_tmp); // 함수의 인자를 주소로 받을 경우 값을 그대로 넘깁니다. 하지만 받는 쪽에선 포인터로 받습니다.

    return 0;
}
// 변수의 주소를 명시적으로 알려주면 포인터의 크기로 인자가 넘어갑니다.
// 하지만 넘어오는 값을 포인터로 받으면 자료형만큼의 바이트만 사용됩니다.

/* 정리
1. Call by Value : 인자의 값을 직접적으로 받아옵니다. 이 경우 값을 복사해서 사용합니다.
2. Call by Reference : 인자의 주소를 받아옵니다. 이 경우 포인터로 받아 사용하므로 값이 바뀝니다.
3. Call by Address : 주소를 명시적으로 받아옵니다. 이 경우 포인터의 크기만큼 사용됩니다.
*/