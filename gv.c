// 전역변수 : 프로그램 전체에서 할동
#include <stdio.h>
int num = 10;

void fct() {
    printf("%d", num); //20출력
}

int main() {
    printf("%d", num); //10출력
    num = 20; //변경 1
    fct();
    return 0;
} //반환