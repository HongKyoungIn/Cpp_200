// 087. 배열 일부 변경하기(fill_n);

#include "pch.h"
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int data1[10]{ 0, };
	fill_n(data1, 2, 10);
	fill_n(data1 + 4, 3, 20);

	cout << "== data1 결과 ==" << endl;

	for(int i = 0; i < 10; i++)
		cout << data1[i] << ", ";

	vector<int> data2({ 0, 1, 2, 3, 4, 5, 6, 7 });
	fill_n(data2.begin(), data2.size() - 1, 30);
	fill_n(data2.begin(), 4, 40);

	cout << endl << endl << "== data2 결과 ==" << endl;

	for(int i = 0, size = data2.size(); i < size; i++)
		cout << data2.at(i) << ", ";

	return 0;
}

/* 
template<class OutputIt, class Size, class T>
OutputIt fill_n(OutputIt first, Size count, const T& value) {
	for (Size i = 0; i < count; i++)
		*first++ = value;
	return first;
}

std::fill_n 함수는 채우기 작업이 끝난 다음의 반복자 위치를 반환합니다. 
이는 std::fill_n 함수를 연속적으로 호출하거나, 다음 작업을 수행할 위치를 계산하는 데 유용합니다. 
따라서 반환 타입이 _OutIt인 것이며, 대부분의 경우 이는 입력으로 주어진 _Dest에 _Count를 더한 결과와 같습니다.

*/