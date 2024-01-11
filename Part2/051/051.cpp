// 051. 날짜와 시간을 문자열로 변환하기(localtime)

#include "pch.h"
#include <iostream>
#include <ctime>

using namespace std;

int main() {
    time_t now = time(NULL);
    tm timeinfo;
    localtime_s(&timeinfo, &now);

    char buffer[100];
    strftime(buffer, 100, "예제 만드는 지금은 %Y년 %m월 %d일, %H시 %M분 %S초 입니다.(%p)\n", &timeinfo);

    cout << buffer;

    return 0;
}

// time_t : C++ 에서는 UTC 1970년 1월 1일 00:00:00로부터 시간을 초(second)단위로 카운트하여 time_t 라는 타입으로 제공한다.
// 이 외에 time_t 형식을 년월일시분초 형태로 분할한 일시(struct tm 형식)로 변환하는 gmtime(gmtime_s)과 localtime(localtime_s) 함수가 있다.
// localtime_s는 첫 번째 인자로 tm 구조체의 포인터를 받고, 두 번째 인자로 time_t 변수의 포인터를 받습니다.
// 이렇게 하면 time_t 타입의 변수를 tm 구조체로 변환하여 저장합니다.
// size_t strftime(char *str, size_t maxsize, const char *format, const struct tm *timeptr);