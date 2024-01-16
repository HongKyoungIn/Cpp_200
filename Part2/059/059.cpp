// 059. 문자열 일부 지우기(erase)

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
    string sentence = "I hate coding";

    sentence.erase(0, 7);

    cout << "I like " << sentence << endl;

    return 0;
}

// erase(삭제할 영역의 시작 인덱스, 삭제할 문자 개수)