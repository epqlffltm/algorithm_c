#include<stdio.h>

int max3(int *a, int *b, int *c);

int main(void)
{
  int a=5, b=1, c=7;
  for(int i=0;i<10;i++)
  {
    int max = max3(&a, &b, &c);
    printf("a = %d, b = %d, c = %d, max = %d\n",a,b,c,max);
    a++;
    b+=2;
    c--;
  }

  return 0;
}

int max3(int *a, int *b, int *c)
{
  int max = (*a<=*b?*b:*a);
  max = max<=*c?*c:max;

  return max;
}