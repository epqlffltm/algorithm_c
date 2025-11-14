/*
2025-11-14
2자리수 정수 입력
드모르간 정리
*/

#include<stdio.h>

int main(void)
{
  int n=0;
  const int min=10, max=99;

  puts("2자리 양수를 입력하세요");

do {
    printf("input: ");
    scanf("%d",&n);
} while (n < min || n > max);
// !(n>=10 && n<=99) 와 같다.
  printf("%d는 2자리 양수다.\n",n);

  return 0;
}