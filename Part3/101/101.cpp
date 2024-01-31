// 101. 파일 복사 삭제하기(copy, remove)

#include "pch.h"
#include <iostream>
#include <filesystem>

using namespace std;
namespace fs = std::filesystem;

int main() {
	fs::copy("연개수영 전설.txt", "(복사)연개수영 전설.txt");
	fs::remove("연개수영 전설.txt");

    return 0;
}