// 071. 포인터 배열 사용하기!

#include "pch.h"
#include <iostream>
using namespace std;

int main() {
	const int kSize = 3;

	int numbers[kSize] = { 10, 20, 30 };
	int *pointer1 = numbers; // 포인터 변수에 배열의 주소를 저장합니다. numbers[0]을 가리킵니다.

	int no1 = 1;
	int no2 = 2;
	int no3 = 3;
	int *pointer2[kSize] = { &no1, &no2, &no3 }; // 포인터 배열을 선언과 초기화를 진행합니다.

	for(int i = 0; i < kSize; i++)
		cout << "Pointer1[" << i << "] = " << *(pointer1 + i) << endl;

	for(int i = 0; i < kSize; i++)
		cout << "Pointer2[" << i << "] = " << *pointer2[i] << endl;

    return 0;
}

// 포인터 산술
// *(pointer1 + i) 표현식은 포인터 산술을 사용하여 배열의 요소에 접근하고 있습니다.
// 포인터 산술에서 pointer1 + i는 pointer1이 가리키는 주소에 i만큼의 "단위"를 더한 새로운 주소를 반환합니다.
// 여기서 "단위"는 포인터가 가리키는 데이터 타입의 크기에 해당합니다.
// 즉, int 타입의 포인터인 경우, pointer1 + i는 pointer1이 가리키는 주소에 i * sizeof(int)만큼을 더한 주소를 반환합니다.