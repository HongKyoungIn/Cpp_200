// 060. 문자열 이동하기(move)!

#include "pch.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string str1 = "I like coding";
    string str2 = move(str1);

    cout << "str1 : " << str1 << endl;
    cout << "str2 : " << str2 << endl;

    vector<int> v1 = { 1,2,3 };
    vector<int> v2 = move(v1);

    cout << "v1 size : " << v1.size() << endl;
    cout << "v2 size : " << v2.size() << endl;

    return 0;
}
// 문자열을 복사하지 않고 다른 곳으로 이동할 때에는 move를 사용한다.(잘라내기)