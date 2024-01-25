// 089. 구조체를 함수 인자로 사용하기

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

struct Princess {
	string name;
	string father;
	string birthday;
} jungso; // 구조체 변수 선언

void Print(Princess *who) {
	cout << "jungso.name = " << who->name << endl;
	cout << "jungso.father = " << who->father << endl;
	cout << "jungso.birthday = " << who->birthday << endl;
}
/* 
	->(화살표) 는 포인터를 통해 멤버를 간접적으로 접근한다.
	a -> b 는 (*a).b와 동일합니다.
*/
int main() {
	jungso.name = "정소공주";
	jungso.father = "조선 태종";
	jungso.birthday = "1412년";

	Princess sejong;
	sejong.name = "이도";
	sejong.father = "태종 이방원";
	sejong.birthday = "1397년 5월 15일";

	Print(&jungso);
	cout << endl;
	Print(&sejong);

	return 0;
}