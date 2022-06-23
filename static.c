//static변수 (정적변수)

#include <stdio.h>

void count() {
    int num = 0; //스택영역 중 count스택에 num=0할당
    printf("%d", num); // 0출력, 0출력, 0출력
    num++;
} // 이 시점 스택영역에서 num이 사라짐

void static_count() {
    static int num = 0; //데이터 영역에 할당 (두번째 부터는 무시)
    printf("%d", num); //0출력, 1출력, 2출력
    num++; // 0 -> 1
}

int main() {
    for(int i = 0; i < 3; i++) {
        count();
        static_count();
    }
    return 0;
}

/*      최종 출력 값
        0 0 0 1 0 2     */