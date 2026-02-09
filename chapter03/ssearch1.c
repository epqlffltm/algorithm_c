/*
2026-02-09
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>

int search(const int ary[],  int* const n,  int* const key);

int main(void)
{
  srand(time(NULL));
  int nx = rand()%5+5;
  int ky = rand()%10+1;
  puts("선형 검색");
  printf("요소 개수: %d\n",nx);
  
  int *ary = (int*)malloc(nx * sizeof(int));
  
  for(int i = 0; i < nx; i++)
  {
    ary[i] = rand()%10+1;
  }

  printf("검색값%d\n",ky);

  int idx = search(ary, &nx, &ky);

  idx == -1 ? printf("검색 실패\n") : printf("%d -> ary[%d]\n",ky, idx );
  
  free(ary);

  return 0;
}

int search(const int ary[],  int* const n,  int* const key)
{
  int i = 0;

  while(true)
  {
    if(i == *n)
    return -1;
    if(ary[i] == *key)
    return i;
    i++;
  }
}