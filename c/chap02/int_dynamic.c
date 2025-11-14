/*
2025-11-14
callol
*/

#include<stdio.h>
#include<stdlib.h>

int main(void)
{
  int *pn = calloc(1,sizeof(int));

  if(pn == NULL)
  {
    puts("메모리 할당에 실패했습니다.");
    return 1;
  }
  else
  {
    *pn = 57;
    printf("%d\n",*pn);
  }

  free(pn);

  return 0;
}