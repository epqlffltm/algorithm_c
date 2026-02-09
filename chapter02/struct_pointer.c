/*
구조체 포인터
*/

#include<stdio.h>

struct test
{
  int n;
  char c;
};

int main(void)
{
  struct test t;
  struct test *pt = &t;

  (*pt).n = 5;
  (*pt).c = 'a';

  printf("%d - %c\n", t.n, t.c);

  pt->n = 1;
  pt->c = 'b';

  printf("%d - %c\n", t.n, t.c);

  return 0;
}