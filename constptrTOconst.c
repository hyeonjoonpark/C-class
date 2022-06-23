//상수를 가리키는 상수 포인터(constant pointer)
int main() {
    const int num1 = 10; //상수 선언
    const int num2 = 20;//상수 선언
    const int * const numptr = &num1;
    *numptr = 30; //Error
    numptr = &num2;//Error
    return 0;
}