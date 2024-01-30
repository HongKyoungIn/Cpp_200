// 094. 파일을 한 줄씩 읽기(ifstream, get)

#include "pch.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

int main() {
	ifstream file;
	file.open("093.txt", ifstream::in);

	string line;

	while(getline(file, line)) // getline : 한 줄씩 읽어 line 변수에 저장
		cout << line << endl;

	file.close();

	return 0;
}