/*
2025-11-25
동적베열 최대수 찾기
*/

#include<stdio.h>
#include<stdlib.h>

int max_ary(int *height, int n);

int main(void)
{
  int n=0;
  printf("사람수: ");

  //
  if(scanf("%d",&n)!=1 || n <= 0)
  {
    printf("숫자만 입력하세요");
    exit(1);
  }  
  
  int *height = calloc(n, sizeof(int));
  if(!height)
  {
    printf("메모리 확보 실패");
    exit(1);
  }

  printf("%d 명의 키를 입력하세요\n",n);
  for(int i=0;i<n;i++)
  {
    printf("height : ");
    if(scanf("%d",height + i)!=1)
    {
      printf("숫자만 입력하세요");
      --i;//다시 입력 받기
      int c;
      while((c = getchar()) != '\n' && c != EOF);
    }
  }

  int max = max_ary(height, n);

  printf("%d\n",max);

  free(height);

  return 0;
}

int max_ary(int *height, int n)
{
  int result = 0;

  for(int i=0; i<n; i++)
  {
    if(result<height[i])
    result = height[i];
  }

  return result;
}