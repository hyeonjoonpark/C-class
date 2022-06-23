int main() {
    int num = 10;
    int * numptr1;
    int ** numptr2; //이중 포인터 변수의 선언
    numptr1 = &num;
    numptr2 = &numptr1;
    **numptr2++;
    pritnf("%d", **numptr2); //11출력
    return 0;
}