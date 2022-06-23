//스텍 영역 예시 2(지역변수)

#include <stdio.h>
int main() {
    {
        int num = 10; //num 생성시점, 가장가까이 num을 감싸고 있는 것 -> main 함수
        {
            printf("%d", num); // 10출력
        }
        return 0;
} // num의 반환시점