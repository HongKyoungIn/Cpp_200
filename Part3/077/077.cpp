// 077. const 변수 이해하기

#include "pch.h"
#include <iostream>

using namespace std;

int main() {
    const string kMyJob = "developer";

    string question = "who you are : ";
    string answer = "my job is : ";

    cout << question << kMyJob << endl;
    cout << answer << kMyJob << endl;

    return 0;
}