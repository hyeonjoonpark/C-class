#include <stdio.h>
int main() {
    int num=10;
    int * numptr; //포인트 선언
    numptr = &num; //포인트가 변수의 권한을 위임받음
    printf("%p", numptr);
    printf("%p", &num);
    return 0;
}

// printf("%p", numptr); 와 printf("%p", &num); 은 같은 값 출력