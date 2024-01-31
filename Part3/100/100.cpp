// 100. 파일 생성, 복사, 삭제하기(filesystem)

#include "pch.h"
#include <iostream>
#include <filesystem>

using namespace std;
namespace fs = std::filesystem;

int main() {
	fs::create_directory("temp");
	fs::copy("temp", "temp_copy");
	fs::remove("temp");
	fs::remove("temp_copy");

    return 0;
}