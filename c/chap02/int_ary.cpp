/*
2025-11-14
배열
*/

#include<stdio.h>
#define N 10
int main(void)
{
  int ary[N];
  
  for(int i=0; i<N; i++)
  {
    ary[i]=i;
  }

  for(int i=0; i<N; i++)
  {
    printf("%d\n",ary[i]);
  }

  return 0;
}