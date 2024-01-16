// 061. 문자열에서 특정 문자만 제거하기(erase, remove)

#include "pch.h"
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string sentence = "1222526";

    remove(sentence.begin(), sentence.end(), '2');

    cout << "first : " << sentence << endl;

    sentence.erase(remove(sentence.begin(), sentence.end(), '2'), sentence.end());

    cout << "final : " << sentence << endl;

    return 0;
}

// 1. remove() 함수
// 주어진 값을 컨테이너 내에서 삭제하고 마지막 인덱스 + 1 (== end)를 반환한다.
// 단, 이 때 컨테이너의 크기가 실제로 줄어드는 것이 아니라, 삭제되어야 할 원소들의 위치에 유지될 원소들의 값을 덮어 씌우는 것이다.
// 그래서 컨테이너의 뒤 쪽에 쓸데없는 데이터가 남게 된다.
// 즉, remove() 함수는 어떤 것도 진짜로 없애지는 않는다.
// removo()는 모음의 요소를 바꾸지 않는다. 3의 값을 갖던 요소들은 그 다음 값으로 덮어써진다.