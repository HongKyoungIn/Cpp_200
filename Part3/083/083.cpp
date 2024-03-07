// 083. 1차원 배열 함수 인자 사용하기;

#include "pch.h"
#include <iostream>

using namespace std;

void Print1(int *arr) {
	cout << "== Print1 ==" << endl;
	cout << arr[0] << ", " << arr[1] << ", " << arr[2] << endl;

	arr[1] = 1000;
}

void Print2(int arr[]) {
	cout << "== Print2 ==" << endl;
	cout << arr[0] << ", " << arr[1] << ", " << arr[2] << endl;

	arr[2] = 2000;
}

int main() {
	int data[3] = { 0, 1, 2 };

	Print1(data);
	Print2(data);

	cout << "== 결과 ==" << endl;
	cout << data[0] << ", " << data[1] << ", " << data[2] << endl;

	return 0;
}
/* 
두 함수 모두 배열을 매개변수로 받는 함수입니다. 
그러나 C++에서 배열은 내부적으로 포인터로 처리되므로, 실제로 이 두 함수는 동일한 방식으로 작동합니다.
즉, int *arr와 int arr[]는 모두 첫 번째 배열 요소의 주소를 가리키는 포인터를 받습니다. 
따라서 함수 내부에서 이 매개변수를 통해 배열의 요소에 접근하거나 수정할 수 있습니다.
*/