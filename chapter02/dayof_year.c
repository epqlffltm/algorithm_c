/*
2026-02-08
날짜 계산기
*/

#include<stdio.h>
#include<stdlib.h>

int isleep(int year);
int dayof_year(int y, int m, int d);
void error_check(int result);

int mdays[][12] = 
{
  {31,28,31,30,31,30,31,31,30,31,30,31},
  {31,29,31,30,31,30,31,31,30,31,30,31}
};

int main(void)
{
  int retry = 0;
  do
  {
    int year = 0, month = 0, day = 0;
    
    printf("년: ");
    error_check(scanf("%d",&year));

    printf("월: ");
    error_check(scanf("%d",&month));

    printf("일: ");
    error_check(scanf("%d",&day));

    printf("%d년의 %d번째 날입니다.\n",year,dayof_year(year, month, day));

    printf("\n다시 계산하시겠습니까?\n");
    printf("YES(1) / NO(0): ");
    error_check(scanf("%d",&retry));
  } while (retry == 1);
  
  return 0;
}

int isleep(int year)
{
  return year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
}

int dayof_year(int y, int m, int d)
{
  int days = d;
  for(int i = 1; i < m; i++)
  {
    days += mdays[isleep(y)][i - 1];
  }
  return days;
}

void error_check(int result)
{
  if (result != 1)
  {
    perror("input error");
    exit(1);
  }
}