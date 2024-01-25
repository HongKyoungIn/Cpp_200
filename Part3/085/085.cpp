// 085. 2차원 배열 함수 인자 사용하기

#include "pch.h"
#include <iostream>

using namespace std;

void Func1(int arr[2][2]) { // 직접 크기를 지정하여 인자로 받을 수 있다.
	arr[0][0] = 1000;
}

void Func2(int arr[][2], int row) { // 행을 생략하여 받을 수 있다. 이 경우 행 크기를 담는 변수를 인자로 받아야 한다.
	arr[row - 2][1] = 2000;
}

void Func3(int *arr, int row, int col) { // 배열을 포인터로 받을 수 있다.
	*(arr + row + col - 1) = 3000;
}

int main() {
	int data[2][2]{ { 1, 2 },{ 3, 4 } };

	Func1(data);
	Func2(data, 2);
	Func3(*data, 2, 2);

	cout << "== 결과 ==" << endl;
	for(int i = 0; i < 2; i++) {
		for(int j = 0; j < 2; j++) {
			cout << data[i][j] << endl;
		}
	}

	return 0;
}