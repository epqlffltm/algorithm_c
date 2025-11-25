/*
2025-11-25
배열에 랜덤값 넣기
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void input(int *pn, int *pary);
void print(int *pn, int *pary);

int main(void)
{
  srand(time(NULL));
  
  int n = 5 + rand()%5;

  int *ary = (int*)malloc(sizeof(int)*n);
  if(!ary)
  {
    printf("메모리 할당 실패\n");
    exit(1);
  }

  input(&n, ary);

  print(&n, ary);

  free(ary);

  return 0;
}

void input(int *pn, int *pary)
{
  for(int i=0; i<*pn; i++)
  {
    pary[i] = rand()% 50;
  }

}

void print(int *pn, int *pary)
{
  for(int i=0; i<*pn; i++)
  {
    printf("ary[%d] = %d\n",i,*(pary+i));
  }
}