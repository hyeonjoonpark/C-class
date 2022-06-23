//다양한 자료형의 포인터
#include <stdio.h>
int main() {
    long long * numptr1;
    float * numptr2;
    char * cptr;
    long long num1 = 10; 
    float num2 = 3.5f; // float - 상수 뒤에 f 붙이는 것이 관례
    char c1 = 'a';
    numptr1 = &num1;
    numptr2 = &num;
    cptr = &c1;
    printf("%lld\n", *numptr1);
    printf("%f\n", *numptr2);
    printf("%c\n", *cptr);
    return 0;
}

//자료형과 주소 포인터 형태가 같아야 함