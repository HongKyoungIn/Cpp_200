// 116. 클래스 상속 ② Is-A 관계

#include "pch.h"
#include <iostream>

using namespace std;

class Landload {
public:
	void IamLandload() {
		cout << "건물주입니다." << endl;
	}
};

class Tenant {
public:
	void IamTenant() {
		cout << "세입자입니다." << endl;
	}
};

class Nation : public Landload, public Tenant {
public:
	void Who() {
		cout << "저는 ";

		if(is_landload == true)
			IamLandload();
		else
			IamTenant();
	}

public:
	bool is_landload;
};

int main() {
	Nation nation;
	nation.is_landload = true;
	nation.Who();

	return 0;
}
/*
Is-A 관계 : 무엇은 무엇이다.
*/