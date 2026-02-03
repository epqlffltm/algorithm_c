/*
2026-02-03

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <errno.h>

int main(void)
{
  srand((unsigned)time(NULL));

  int n = 0;

  printf("숫자를 입력하세요: ");

  if(scanf("%d", &n) < 1 || n <= 0) 
  {
    perror("perror로 출력"); 
    exit(EXIT_FAILURE);
  }

  int *p = (int*)malloc(sizeof(int)*n);
  if(p == NULL) 
  {
    perror("perror로 출력"); 
    exit(EXIT_FAILURE);
  }

  for(int i=0; i<n; i++)
  {
    p[i] = rand()%100 + 10;
  }

  printf("%d개의 난수\n", n);
  for(int i=0; i<n; i++)
  {
    printf("%d ", *(p + i));
  }
  free(p);
  
  return 0;
}