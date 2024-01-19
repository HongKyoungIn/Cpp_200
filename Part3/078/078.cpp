// 078. const 포인터 이해하기

#include "pch.h"
#include <iostream>

using namespace std;

int main() {
    int number1 = 10;
    int number2 = 20;

    int const *ptr1;
    ptr1 = &number1;
    cout << "ptr1 : " << ptr1 << endl;
    // ptr1 = number1;
    ptr1 = &number2;
    cout << "ptr1 : " << ptr1 << endl;

    int *const ptr2 = &number1;
    cout << "ptr2 : " << ptr2 << endl;
    *ptr2 = number2;
    cout << "ptr2 : " << ptr2 << endl;
    //* ptr2 = &number2;

    return 0;
}