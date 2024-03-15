// 070. 포인터 변수 사용하기!

#include "pch.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int PointerFunc(vector<string> *info) { // vector<string>은 문자열(string) 타입의 동적 배열을 나타내는 C++의 표준 라이브러리 컨테이너입니다.
	if(info->empty() == true)  // ->는 포인터 변수를 다루는 규칙
		return 0;
	else
		return sizeof(info);
}

int main() {
	vector<string> message;
	message.push_back("고려 장군"); // push_back은 C++의 vector 클래스가 제공하는 멤버 함수로, vector의 끝에 새로운 요소를 추가하는 역할을 합니다.
	message.push_back("척준경!");
	message.push_back("절친 이름은");
	message.push_back("... 무엇일까");

	cout << "포인터 인자 크기 : " << PointerFunc(&message) << endl;
	cout << "원래 변수 크기 : " << sizeof(message) << endl;

	return 0;
};
// 포인터를 사용하면 프로그램 전체 성능을 올리는데 도움이 됩니다.
// 함수는 인자로 넘어오는 값을 일단 복사하여 사용하는데 만약 인자가 너무 크다면 복사하는데 많은 시간이 소요됩니다.
// 하지만 포인터의 크기는 인자보다 작고 항상 정해져 있으므로 성능 향상에 도음이 됩니다.