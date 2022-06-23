//전역변수명과 지역변수명이 같다면?
#include <stdio.h>
void fct();
int num = 10; //전역변수
int main() {
    int num = 20; //main()
    printf("%d", num); //20출력
    { //블록 생성
        int num = 30; //블록이 감쌈
        printf("%d", num);//30출력
    } //반환 1
    fct();
    printf("%d", num); //20출력
    return 0;
}//반환 3
void fct() {
    num++; //num+1
    printf("%d", num); //11출력
} //반환 2