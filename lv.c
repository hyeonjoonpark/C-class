//지역변수 step2.

void fct(void);
int main(void) {
    int i = 5; //main()이 감쌈
    int num = 10; //main()이 감쌈
    printf("%d", num); //10출력
    if(i<10) {
        fct();
        int num = 30; //블록이 감쌈
        printf("%d", num); //30출력
    } //반환 2
    printf("%d", num); // 10출력
    return 0;
} //반환 3
void fct(void) {
    int num=20; //fct()가 감쌈
    printf("%d", num); //20출력
}//반환 1