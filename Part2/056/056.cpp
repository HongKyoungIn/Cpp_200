// 056. 문자열 대소문자 변환하기(toupper, tolower)

#include "pch.h"
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	string silla = "abcdefghijklmnopqrstuvwxyz.";
	string joseon = "Yi Seong-gye, established Joseon in 1392.";
	string temp = "this is test string. this is test string.";

	transform(silla.begin(), silla.end(), temp.begin(), toupper);
	transform(joseon.begin(), joseon.end(), joseon.begin(), tolower);

	char lower_ch = 'g';
	char upper_ch = 'B';

	lower_ch = toupper(lower_ch);
	upper_ch = tolower(upper_ch);

	cout << "문자열 대문자로 변환 : " << temp << endl;
	cout << "문자열 소문자로 변환 : " << joseon << endl;
	cout << "문자 대문자로 변환 : " << lower_ch << endl;
	cout << "문자 소문자로 변환 : " << upper_ch << endl;

	return 0;
}

// tranform(복사할 문자열의 시작점, 복사할 문자열의 종료점, 복사될 문자열의 시작점(다른 문자열에 대입가능), 수행할 기능)
