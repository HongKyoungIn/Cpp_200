// 097. 프로그램 실행 폴더 알아내기(current_path);

#include "pch.h"
#include <iostream>
#include <filesystem>

using namespace std;
namespace fs = std::filesystem;

int main() {
	cout << "프로젝트 폴더 : " << fs::current_path() << endl;

	return 0;
}
/*
프로젝트 -> 프로젝트 속성 -> 구성 속성 -> C/C++ -> 언어 -> C++ 언어 표준 -> ISO C++17
*/