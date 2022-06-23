//다운 연산자로 값 저장

#include <stdio.h>
int main() {
    int * numptr;
    int num = 10;
    numptr = &num; //num의 권한을 위임 받음
    *numptr = 20;
    printf("%d", *numptr);
    printf("%d", num);
    return 0;
}

//9행과 10행은 값은 값 출력