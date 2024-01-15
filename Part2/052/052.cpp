// 052. 지나간 시간 알아내기(time)

#include "pch.h"
#include <iostream>
#include <ctime>

using namespace std;

int main() {
    time_t start = time(NULL); // time_t 변수를 선언하고 시간을 초기화합니다.
    time_t finish = time(NULL);

    int pass_int = 1;

    time(&start); // 시작 시간을 설정합니다. 현재 시점의 시간이 start에 할당됩니다. 즉, 타임워치 처음 작동 시간이 됩니다.

    for(int i = 1; i < 100000; i++) {
        for(int j = 1; j < 100000; j++) {
            pass_int += 1;
        }
    }

    time(&finish); // 현재 시간을 finish 변수에 저장합니다. 타임워치로 비교했을 때 종료 시점을 의미합니다.

    // difftime은 두 시간을 비교해 그 결과를 알려줍니다.
    // 반환값은 초 단위로 종료 시간에서 시작 시간을 빼야 경과 시간이 출력됩니다.
    cout << "1을 100억 번 더하는 시간 : " << difftime(finish, start) << "초\n"; 

    return 0;
}