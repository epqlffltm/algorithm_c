/*
2025-11-14
양수 음수 찾기
*/
#include <stdio.h>
#include <cstdlib>

int num(void);

int main(void)
{
    int n = num();

    if (n > 0)
        printf("%d는 양수\n", n);
    else if (n < 0)
        printf("%d는 음수\n", n);
    else
        printf("0은 양수도 음수도 아니다.\n");

    return 0;
}

int num(void)
{
    int n = 0;
    printf("정수: ");

    if (scanf("%d", &n) != 1) 
    {
        printf("정수만 입력하라고!!!!!\n");
        // 에러 상황에서 프로그램 종료
        // 또는 다른 값을 return해도 됨.
        exit(1); 
    }

    return n;
}
