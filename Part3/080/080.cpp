// 080. enum class 이해하기;

#include "pch.h"
#include <iostream>

using namespace std;

enum Status {
    normal = 0,
    abnormal,
    disconnect = 100,
    close
};

enum class MachineStatus : char {
    normal = 'n',
    abnormal,
    disconnect = 100,
    close
};

int main() {
	MachineStatus machine = MachineStatus::abnormal;

	if(machine == MachineStatus::normal)
		cout << "Status : normal" << endl;
	else if(machine == MachineStatus::abnormal)
		cout << "Status : abnormal" << endl;
	else if(machine == MachineStatus::disconnect)
		cout << "Status : disconnect" << endl;
	else
		cout << "Status : close" << endl;

	cout << "machine : " << static_cast<int>(machine) << ", " << static_cast<char>(machine) << endl;

    return 0;
}

/*
enum class를 쓰면 "열거형이름::열거자" 이런식으로 접근이 가능하다.
enum class를 쓰면 중복되는 열거자 이름이 있어도 괜찮다.
enum class를 쓰면 암시적 형변환이 막히기 때문에 명시적 형변환을 해야한다.
enum class를 쓰면 전방 선언이 가능하다.

출처: https://blockdmask.tistory.com/405
*/ 