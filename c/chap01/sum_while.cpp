/*
2025--11-14
while반복문 알고리즘
*/

#include<stdio.h>

int main(void)
{
  int n = 0, sum = 0, i=1;
  printf("임의의 수 n의 수를 입력하세요. :");
  if(scanf("%d",&n) != 1)
  {
    puts("정수만 입력하세요");
    return 1;
  }
  else if(n<=0)
  {
    puts("양수를 입력하세요");
    return 1;
  }
  else
  {
  printf("\n1부터 %d까지 합을 구합니다.\n",n);
  
  while(i<=n)
  {
    sum+=i;
    i++;
  }
  printf("1부터 %d까지 합은 %d입니다.\n", n,sum);
  }

  return 0;
}