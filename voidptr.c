#include <stdio.h>
int main() {
    int num = 10;
    char c = 'a';
    int * numptr = &num; //선언과 동시에 초기화
    char * cptr = &c; //선언과 동시에 초기화
    void * ptr; //void ---> 참조하고자 하는 자료형이 정해지지 않음(일명 괴짜 포인터) - 모든 자료형의 포인터 주소를 받을 수 있음
    //범용 포인터라고도 불린다.

    numptr = cptr; //Error
    numptr = &c; //Error

    ptr = numptr; //가능
    ptr = &num; //가능
    //모든 주소를 받을 수 있다


    //void 포인터의 다운연산(*)
    ptr = numptr;
    printf("%d", *ptr); //Error - 몇바이트를 읽어야 하는지 모르기 때문
    printf("%d", *(int *)ptr); //(int *)가 몇 바이트를 읽어야 하는지 알려줌  // 10출력

    ptr = cptr;
    //printf("%d", *ptr); //Error - 몇바이트를 읽어야 하는지 모르기 때문
    //printf("%d", c(char *)ptr); //(char *)가 몇바이트를 읽어야 하는지 알려줌 // a 출력
    return 0;
}

//자료형이 다른 포인터끼리 주소를 주게 받는 것은 불가능