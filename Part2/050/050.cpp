// 050. 무작위로 문자열과 배열 섞기(random_suffle)

#include "pch.h"
#include <iostream>
#include <random>
#include <algorithm>
#include <ctime>
#include <string>

using namespace std;

int main() {
	string str1 = "1a2b3c4d5e6f7g8h9i";
	string str2 = "republic of korea";
	int data1[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	srand(static_cast<unsigned int>(time(NULL))); // 난수의 씨앗을 심는 과정

	random_shuffle(str1.begin(), str1.end());
	random_shuffle(str2.begin(), str2.end());
	random_shuffle(data1, data1 + 4); // data1의 인덱스 0 ~ 3까지만 무작위로 배치한다.

	cout << "== str1 ==" << endl;
	for(auto i : str1)
		cout << i << ", ";

	cout << endl << "== str2 ==" << endl;
	for(auto i : str2)
		cout << i << ", ";

	cout << endl << "== data1 ==" << endl;
	for(auto i : data1)
		cout << i << ", ";

	return 0;
}