// 109. 클래스 소멸자 정의하기(~)

#include "pch.h"
#include <iostream>
#include <vector>

using namespace std;

class TempClass {
public:
	TempClass() {
		cout << "생성자 호출" << endl;
	};

	~TempClass() { // 클래스 객체가 삭제될 때 소멸자 함수를 호출합니다.
		cout << "소멸자 호출" << endl;
	}
};

int main() {
	TempClass *temp_class = new TempClass(); // new 키워드로 객체를 생성하면 스택이 아닌 힙 영역에서 관리됩니다.

	delete temp_class;
	temp_class = nullptr;

	return 0;
}
/*
원래처럼 class를 선언하면 스택 영역에 할당되어 함수가 종료되면 클래스 객체가 차지하던 메모리도 반환됩니다.
이번엔 delete 키워드와 소멸자 사용을 위해 힙 영역에 할당하기 위해 new를 사용합니다.
*/