#include <stdio.h>
#include <stdlib.h> //malloc, free함수 사용 위해서

int main() {
    int num1 = 20;
    int *numPtr1 = &num1; // num 변수의 크기 만큼 접근 가능
    int * numPtr2;
    numPtr2 = malloc(sizeof int); //굳이 변수라는 것이 있어야 해? 내가 원하는 크기만큼 변수 없이도 할당
    *numPtr2 = 10;
    printf("%d", num1);
    printf("%d", *numPtr2);
    free(numPtr2);
}