// 115. 클래스 상속 ① Has-A 관계

#include "pch.h"
#include <iostream>

using namespace std;

class Building1 {
public:
	void Name() {
		cout << "노른자 위 좋은 건물" << endl;
	}
};

class BuildingOwner : public Building1 {
public:
	void MyBuilding() {
		cout << "내 보물 : ";
		Name();
	}
};

int main(void) {
	BuildingOwner envious;
	envious.MyBuilding();

	return 0;
}
/*
한 클래스가 다른 클래스를 포함하는 상속 관계.
*/