// 099. 하위 폴더 목록 확인하기(directory_iterator)

#include "pch.h"
#include <iostream>
#include <string>
#include <filesystem>

using namespace std;
namespace fs = std::filesystem;

int main() {
	string directory = "C:\\Program Files";

	for(auto &name : fs::directory_iterator(directory)) // auto : 자료형을 미리 정해놓지 않고 커파일 단계에서 정해준다.
		std::cout << name << '\n';

	return 0;
}