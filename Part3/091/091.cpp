// 091. 구조체 초기화 하는 방법 ② 구조체 안에 다른 구조체를 참조

#include "pch.h"
#include <iostream>

using namespace std;

struct Data1 {
	int number;
};

struct Data2 {
	Data1 data1;

	int number;
} data2;

int main() {
	Data1 data1 = { }; // 내부 변수를 모두 초기화
	Data2 data2{ 1012, 10};

	cout << "Data1 number : " << data2.data1.number << endl;
	cout << "Data2 number : " << data2.number << endl;
	cout << "data1.number : " << data1.number << endl;

	return 0;
}