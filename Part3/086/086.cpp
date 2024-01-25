// 086. 배열 일부 변경하기(fill)

#include "pch.h"
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int data1[10]{ 0, };
	fill(data1, data1 + 3, 10);
	fill(data1 + 4, data1 + 8, 20);

	cout << "== data1 결과 ==" << endl;

	for(int i = 0; i < 10; i++)
		cout << data1[i] << ", ";

	vector<int> data2({ 0, 1, 2, 3, 4, 5, 6, 7 });
	fill(data2.begin(), data2.begin() + 3, 30);

	cout << endl << endl << "== data2 결과 ==" << endl;

	for(int i = 0, size = data2.size(); i < size; i++)
		cout << data2.at(i) << ", ";

	return 0;
}

/*
template <class ForwardIterator, class T>
void fill(ForwardIterator first, ForwardIterator last, const T& val) {
  while (first != last) {
	*first = val;
	++first;
  }
}

first: 채우고자 하는 자료구조의 시작위치 iterator
last: 채우고자 하는 자료구조의 끝위치 iterator이며 last는 포함하지 않는다!
val: first부터 last전까지 채우고자 하는 값으로 어떤 객체나 자료형을 넘겨줘도 템플릿 T에 의해서 가능하다.
*/