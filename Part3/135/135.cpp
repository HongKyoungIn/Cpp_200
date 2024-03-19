// 135. Thread 사용하기(detach)
#include "pch.h"
#include <iostream>
#include <thread>
#include <chrono>


using namespace std;

void Pause(int sec) {
    this_thread::sleep_for(chrono::seconds(sec));
    cout << sec << "초 대기" << endl;
}

int main() {
    thread sleep1(Pause, 3);
    thread sleep2(Pause, 4);
    thread sleep3(Pause, 5);

    // detach = 메인 스레드에서 해당 스레드를 분리합니다.
    // 해당 스레드는 시작 후 종료되는 시점에 점유한 자원의 반환이 보증됩니다.
    // 하지만 분리된 스레드는 제어할 수 없기 때문에 이 스레드가 언제 종료될 지 예상하기 어렵습니다.
    sleep1.detach();
    sleep2.detach();
    sleep3.detach();

    getchar();

    return 0;
}