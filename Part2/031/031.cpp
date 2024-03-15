// 031. 자료형의 크기 이해하기(sizeof)!

#include "pch.h"
#include <iostream>

using namespace std;

class Temp {
	int no;
	bool is_on;
};

int main() {
	cout << "char 크기 : " << sizeof('p') << endl;
	cout << "int 크기 : " << sizeof(10) << endl;
	cout << "double 크기 : " << sizeof(10.0) << endl;
	cout << "클래스 크기 : " << sizeof(Temp) << endl;

    return 0;
}