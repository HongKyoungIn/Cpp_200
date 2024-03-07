// 090. 구조체 초기화 하는 방법 ① 생성자;

#include "pch.h"
#include <iostream>

using namespace std;

struct Data1 {
	Data1(int x) : number(x) {} // 클래스의 생성자 개념

	int number;
};

struct Data2 {
	Data2() {
		number = 10;
	}

	int number;
} data2;

int main() {
	Data1 data1(2);
	cout << "Data1 number : " << data1.number << endl;
	cout << "Data2 number : " << data2.number << endl;

	return 0;
}