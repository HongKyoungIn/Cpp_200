// 079. enum 이해하기;

#include "pch.h"
#include <iostream>

using namespace std;

// 요소는 콤마로 구분하며 값을 설정하지 않아도 자동으로 할당됩니다.
// enum의 요소들은 정수형 값을 갖습니다. 각 요소는 이전 요소의 값보다 자동으로 1씩 증가합니다.
enum Status123 {
	normal = 0,
	abnormal, // normal이 0이였기 때문에 normal의 값보다 1이 큰 1 값을 갖게 됩니다.
	disconnect = 100,
	close // disconnect 값이 100이었기 때문에 이보다 1이 큰 101 값을 갖게됩니다.
};

int main() {
	Status123 number = close; // number는 Status123이라는 열거형(enum) 타입의 변수입니다. 이 변수에는 Status123 열거형에 정의된 값들만 할당될 수 있습니다.
	int number2 = disconnect;

	cout << "number2 : " << number2 << endl;
	number2 = 200;
	cout << "number2 수정 : " << number2 << endl;
	cout << "close : " << close << endl;
	cout << "number : " << number << endl;

	if(number == Status123::normal)
		cout << "Status : normal" << endl;
	else if(number == abnormal)
		cout << "Status : abnormal" << endl;
	else if(number == 101)
		cout << "Status : disconnect" << endl;
	else
		cout << "Status : close" << endl;

	return 0;
}
// enum(enumeration) - 상수 집합인 열거형