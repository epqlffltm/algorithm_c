/*
2026 - 02 - 09
함수 포인터
*/

#include <stdio.h>

int max(int *a, int *b);
int main(void) 
{
  int a = 5, b =10;
  int (*pmax)(int*, int*);
  pmax = max;

  printf("max(a,b) : %d \n", max(&a, &b));
  printf("pmax(a,b) : %d \n", pmax(&a, &b));

  return 0;
}

int max(int *a, int *b) 
{
  int n = *a > *b ? *a : *b;

  return n;
}