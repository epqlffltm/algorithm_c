/*
2025-11-14
for문 기초반복
*/

#include<stdio.h>

int main(void)
{
  int n = 0, sum = 0;
  puts("정수를 입력하세요.");

  if (scanf("%d",&n)!=1)
  {
    puts("숫자만 입력하세요!");
    return 1;
  }
  else if(n<=0)
  {
    puts("양수만 입력하세요!");
    return 1;
  }
  else
  {
    for(int i = 1; i <= n; i++)
    sum+=i;
  }

  printf("합계는 %d\n",sum);

  return 0;
}