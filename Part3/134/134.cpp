// 134. Thread 사용하기(join, sleep)

#include "pch.h"
#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

void Pause(int sec) {
    this_thread::sleep_for(chrono::seconds(sec));
}

int main() {
    // C++에서 std::thread 생성자를 사용하여 스레드를 생성할 때, 첫 번째 인자로 스레드에서 실행할 함수를 넘기고, 그 후의 인자들을 해당 함수의 파라미터로 넘길 수 있습니다.
    thread sleep1(Pause, 3);
    thread sleep2(Pause, 4);
    thread sleep3(Pause, 5);

    // join() = 메인 스레드가 각각의 스레드가 종료될 때까디 대기하도록 합니다.
    sleep1.join();
    cout << "3초 대기" << endl;

    sleep2.join();
    cout << "4초 대기" << endl;

    sleep3.join();
    cout << "5초 대기" << endl;

    return 0;
}