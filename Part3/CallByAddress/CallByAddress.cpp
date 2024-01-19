#include "pch.h"
#include <iostream>

using namespace std;

void CallByAddress(int *address) {
	*address = 20;
	std::cout << "*address : " << *address << std::endl;	//address가 가리키는 주소의 값
	std::cout << "&address : " << &address << std::endl;	//address의 주소
}

int main() {
	int num = 10;
	CallByAddress(&num);
	std::cout << "num\t : " << num << std::endl;	//num의 값
	std::cout << "&num\t : " <<  &num << std::endl;	//num의 주소

    return 0;
}