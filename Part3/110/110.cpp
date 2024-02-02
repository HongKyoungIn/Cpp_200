// 110. 동적 메모리 할당(new, delete)

#include "pch.h"
#include <iostream>

using namespace std;

class Info {
public:
	Info() {
		data = new int;
		data_arr = new int[3];
	}
	~Info() {
		delete data;
		delete[] data_arr;
	}

	void Dispose() {
		delete data;
		delete[] data_arr;
	}

private:
	int *data;
	int *data_arr;
};

int main() {
	Info *info = new Info();

	info->Dispose();
	delete info; // 에러 발생. 이미 해제된 영역이라 프로그램에서 에러가 발생한다.

	return 0;
}
/*
스택 : 컴파일 시점에 크기가 결정되는 요소들이 할당되는 영역
바이너리 : static, 전역 요소들이 할당되는 영역
힙 : 동적으로 메모리가 할당되는 영역. 
*/