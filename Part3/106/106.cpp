// 106. 클래스 복수 생성자 정의하기

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

class KingInfo {
public:
	KingInfo() {
		value_ = "조선 성종 이혈";
	};

	KingInfo(const string value) {
		value_ = value;
	};

	KingInfo(const int value) {
		value_ = "연산군 즉위연도 : ";
		value_ += to_string(value);
	};

public:
	string GetValue() const {
		return value_;
	}

private:
	string value_;
};

int main() {
	KingInfo king_info1; // KingInfo() 적용
	KingInfo king_info2("조선 연산군 이융"); // KingInfo(const string value) 적용
	KingInfo king_info3(1494); // KingInfo(const int value) 적용

	cout << king_info1.GetValue() << endl;
	cout << king_info2.GetValue() << endl;
	cout << king_info3.GetValue() << endl;

	return 0;
}