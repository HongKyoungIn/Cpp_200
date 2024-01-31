// 103. 파일 크기 확인하기(file_size)

#include "pch.h"
#include <iostream>
#include <filesystem>

using namespace std;
namespace fs = std::filesystem;

int main() {
	int size = fs::file_size("연개수영 전설.txt");

	cout << "파일 크기 : " << size << "바이트" << endl;

	return 0;
}