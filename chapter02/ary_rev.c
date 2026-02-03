/*
2026-02-03
배열의 값 뒤집기
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<errno.h>

void input (int *pn,const int *size);
void swap (int *pn,const int *size);
void output (const int *pn,const int *size);

int main(void)
{
  srand(time(NULL));

  int n = rand()%10+5;

  int *pary = (int *)malloc(n * sizeof(int));
  if(pary == NULL)
  {
    perror("메모라 할당 에러");
    exit(EXIT_FAILURE);
  }

  input(pary,&n);
  output(pary,&n);

  swap(pary, &n);
  output(pary,&n);

  free(pary);
  
  return 0;
}

void input(int *pn,const int *size)
{
  for(int i = 0; i < *size; i++)
  {
    pn[i] = rand()%10;
  }
}

void swap(int *pn,const int *size)
{
  for(int i = 0; i < *size/2; i++)
  {
    if(*(pn+i) != pn[*size-i-1])
    {
      *(pn+i) ^= pn[*size-i-1];
      pn[*size-i-1] ^= *(pn+i);
      *(pn+i) ^= pn[*size-i-1];
    }
  }
}

void output(const int *pn,const int *size)
{
  for(int i=0;i<*size;i++)
  {
    printf("%d",*(pn+i));
  }
  printf("\n");
}