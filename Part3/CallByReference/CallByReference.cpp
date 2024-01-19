#include "pch.h"
#include <iostream>

using namespace std;

void CallByReference(int &reference) {
	reference = 20;
	std::cout << "reference\t: " << reference << std::endl;	//reference가 가리키는 값
	std::cout << "&reference\t: " <<  &reference << std::endl;	//reference의 주소
}

int main() {
	int num = 10;
	CallByReference(num);
	std::cout << "num\t\t: " << num << std::endl;	//num의 값
	std::cout << "&num\t\t: " << &num << std::endl;	//num의 주소

    return 0;
}