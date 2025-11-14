/*
2025-11-14
배열 테스트2
*/
#include<stdio.h>
#define N 10
int main(void)
{
  int ary[N] = {1,2,3,4,5};
  int n = sizeof(ary)/sizeof(int);
  printf("배열의 요소는 %d\n",n);

  for(int i=0;i<N;i++)
  {
    ary[i] = i+1;
  }
  
  n = sizeof(ary)/sizeof(ary[0]);

  printf("배열의 요소는 %d\n",n);

  return 0;
}