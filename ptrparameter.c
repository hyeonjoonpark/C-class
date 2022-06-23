//포인터 매개변수(ptr parameter)
//call by value     vs      call by reference

//목적 num1과 num2의 값 변경

#include <stdio.h>
int main() {
    int num1 = 10;
    int num2 = 20;
    swap(num1, num2);
    printf("%d %d", num1, num2);
//실패

    swap_pointer(&num1, &num2); //주소를 넘겨줌 -> main 전용 스택에 접근 가능
    printf("%d %d", num1, num2); //20, 10출력
    return 0;
}

void swap(int first, int second) { // first에 num1을 second에 num2의 값을 인계(call by value)
    int temp; //쓰레기 값
    temp = *first; //temp = 10
    *first = *second; //first = 10 -> 20
    *second = temp; //second = 20 -> 10
}
/*      num1 -> num2
        num2 -> num1        */
    
void swap_pointer(int *first, int *second) { //권한 위임 (call by refence)
    int *temp;
    *temp = *first;
    *first = *second;
    *second = *temp;
}