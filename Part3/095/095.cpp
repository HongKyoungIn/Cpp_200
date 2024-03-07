// 095. 파일의 내용을 모두 읽기(stringstream);

#include "pch.h"
#include <iostream>
#include <sstream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	ifstream ifs("삼한시대 마한 태기왕 전설.txt");

	stringstream ss;

	ss << ifs.rdbuf();
	ifs.close();

	string read = "";

	cout << "== !ss.eof ==" << endl;
	while(!ss.eof()) {
		ss >> read; // 연속된 문자열을 한 단위로 지정합니다. 띄어쓰기, 특수문자 등을 만나기 전까지의 텍스트를 한 단위로 처리합니다.
		cout << read << " ";
	}

	cout << endl << "== !ss.str() ==" << endl;
	read = ss.str(); // 텍스트 내용을 출력하는 방법으로 stringstream의 모든 데이터를 문자열로 변환하여 string 변수에 담을 수 있습니다.

	cout << endl << read << endl;

	return 0;
}