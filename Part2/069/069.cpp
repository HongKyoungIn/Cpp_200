// 069. 포인터 이해하기(*)!

#include "pch.h"
#include <iostream>
using namespace std;

int main() {
	int number1 = 10;
	int *pointer1 = &number1;

	double number2 = 23.4;
	double *pointer2 = &number2;

	cout << "number1 : " << number1 << " (size : " << sizeof(number1) << ")" << endl;
	cout << "pointer1 : " << pointer1 << " (size : " << sizeof(pointer1) << ")" << endl;

	cout << "number2 : " << number2 << " (size : " << sizeof(number2) << ")" << endl;
	cout << "pointer 2: " << pointer2 << " (size : " << sizeof(pointer2) << ")" << endl;

    return 0;
}
// 32bit의 설정으로 컴파일을 했을 때는 4바이트가 나오지만
// 컴파일 설정이 64bit인 경우엔 포인터변수들의 크기는 4바이트가 아닌 8바이트이다.
// (64bit의 컴파일러에서 포인터 변수의 크기가 8바이트이며, 16bit의 컴파일러에서는 2바이트이다.)