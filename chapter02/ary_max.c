/*
2026-02-03
최댓값 찾기
*/

#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
#include<time.h>

int maxof(int *a, int n);

int main(void)
{
  srand(time(NULL));

  int number = rand()%10 + 5;
  
  printf("사람수: %d\n",number);
  
  int *height = malloc(number*sizeof(int));
  
  if (height == NULL)
  {
    perror("메모리 할당 실패");
    exit(EXIT_FAILURE);
  }
  
  for(int i = 0; i< number; i++)
  {
    *(height+i) = rand()%120 + 50;
  }
  int max = maxof(height, number);

  printf("max : %d", max);

  free(height);

  return 0;
}

int maxof(int *a, int n)
{
  int max = *a;
  for(int i = 0; i < n; i++)
  {
    if(max < *(a + i))
    {
      max = *(a + i);
    }
  }

  return max;
}