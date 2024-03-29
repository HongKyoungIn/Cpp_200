﻿// 040. 반복문을 이용하여 구구단(15단) 출력하기(방법2)

#include "pch.h"
#include <iostream>
using namespace std;

int main() {
	int offset = 0;

	for(int i = 1; i <= 15; i += offset) {
		for(int j = 1; j <= 9; j++) {
			cout << i << " * " << j << " = " << i * j;

			for(int k = 0; k < offset; k++) {
				cout << "\t";
				cout << (i + k + 1) << " * " << j << " = " << (i + k + 1) * j;
			}

			cout << endl;
		}

		cout << endl;

		offset++;
	}

    return 0;
}