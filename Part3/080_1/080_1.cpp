// 

#include "pch.h"
#include<iostream>

using namespace std;

enum ECar {
    cBMW,
    cAUDI,
    cKIA,
    cBENZ,
    cHYUNDAE,
    cPORSCHE,
};

enum EKoreaCar {
    kcKIA,
    kcHYUNDAE,
};

int main(void) {
    int num = cPORSCHE;
    cout << "KIA : " << num << endl;
    return 0;
}