// 125. type_traits 사용하기 ③ (conditional)

#include "pch.h"
#include <iostream>
#include <type_traits>
#include <string>

using namespace std;

template <typename T1, typename T2>
auto TmpFunc(T1 x, T2 y) {
    using type = typename conditional<is_same<T1, T2>::value, int, double>::type;
    return type{};
}

int main() {
    auto value = TmpFunc(1, 22.3);

    if(is_same<decltype(value), double>::value)
        cout << "double 자료형입니다." << endl;
    else
        cout << "double 자료형이 아닙니다." << endl;

    return 0;
}
