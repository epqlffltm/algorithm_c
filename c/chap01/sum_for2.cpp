/*
2025-11-14
for문 번형
*/

#include<stdio.h>

int main(void)
{
  unsigned n = 0;
  puts("정수를 입력하세요");

  do{
    printf("값: ");
    if(scanf("%u",&n) != 1)
    {
      puts("정수만 입력하세요");
      return 1;
    };
  }while (n<=0);
  //n이 0보다 커질떄까지 재반복한다.

  unsigned int sum = 0;

  for(unsigned int i=1; i<=n; i++)
  {
    sum+=i;
  }

  printf("1부터 %u까지 합계는 %u", n, sum);

  return 0;
}