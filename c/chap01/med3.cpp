/*
2025-11-13
중간값 찾기
*/
#include<stdio.h>

int med3(int *a, int *b, int *c);

int main(void)
{
  int a=0, b=5, c=10;

  for(int i=0;i<10;i++)
  {
    int med = med3(&a, &b, &c);
    printf("a = %d, b = %d, c = %d, med = %d\n",a,b,c,med);
    a++;
    b+=2;
    c--;
  }

  return 0;
}

int med3(int *a, int *b, int *c)
{
    if ((*a > *b) != (*a > *c))//a는 b보다 크지만 a는 c보다 크지 않다.
    return *a;
    else if((*b > *a) != (*b > *c))//b는 a보다 크지만, c보다 크지 않다. 
    return *b;
    else
    return *c;//남은 c반환
}
