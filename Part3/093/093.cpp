// 093. 파일을 한 글자씩 읽기(ifstream, get)

#include "pch.h"
#include <iostream>
#include <fstream>

using namespace std;

int main() {
	ifstream read;

	read.open("093.txt", ifstream::in); // ifstream::in = 열기 모드

	char line = read.get(); // 파일의 첫 문자 한 개를 읽습니다.

	while(read.eof() == false) { // 파일을 끝까지 읽지 않았다면
		cout << line; // 한 글자씩 출력

		line = read.get(); // 다음 글자 받아오기
	}

	cout << endl;

	read.close(); // 오픈했던 파일을 닫습니다.

	return 0;
}