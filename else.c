//또 다른 포인터의 등장
int main()
{
    int num=5;
    int * numptr1;
    int * numptr2;
    numptr1 = &num;
    numptr2 = numptr1; //두 변수는 같은 계층에 있기 때문에 업(&), 다운(*) 연산이 필요 없다.
    *numptr2 += 3;
    printf("%d", num);
    return 0;
}

//출력 값 = 8