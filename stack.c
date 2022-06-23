//스텍 영역 예시 1 (지역변수 : 해당 함수 (or 블록 {}) 에서만 활동하는 변수)

#include <stdio.h>
int main()
{
    {
        int num1 = 10; //1
    } //블록 종료 
    printf("%d", &num1); //찾는 순서 스텍 영역 -> 데이터 영역 -> 데이터 영역에도 없을 시 에러
    return 0;
}