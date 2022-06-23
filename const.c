//상수 포인터
#include <stdio.h>
int main() {
    int num1 = 10;
    int num2 = 20;
    int * const numptr = &num1; // 변경 가능 권한을 위임
    numptr = &num2; //Error(다른 변수 불가)
    *numptr += 3; //일반 변수의 권한(변경 가능)을 받았기 때문에 Error 안 뜸
    return 0;
}