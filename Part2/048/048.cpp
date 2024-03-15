// 048. 소수점 분리하기(modf)!

#include "pch.h"
#include <iostream>
using namespace std;

int main() {
	double x = 1.2345;
	double div = 0.0;
	double mod = 0.0;

	mod = modf(x, &div);

	cout << "1.2345의 몫 : " << div << ", 나머지 : " << mod << endl;

    return 0;
}

// modf
// 반환값 : 나머지 소수
// 두 번째 변수에 정수 몫이 저장된다.