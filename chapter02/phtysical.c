/*
2026-02-09
구조체 연습
*/

#include<stdio.h>

#define VMAX 21

typedef struct 
{
  char name[16];//워드를 고려해 4의 배수로 작성
  int height;//키
  double vision;//시력
}phys_check;

double ave_height(const phys_check dat[], int n);
void dist_vision(const phys_check dat[], int n, int dist[]);

int main(void)
{
  //const vmax = 21;//시력 최댓값, 사용불가...

  phys_check x[] ={
    {"박현규", 162, 0.3},
    {"황진아", 173, 0.7},
    {"최윤미", 175, 2.0},
    {"홍연의", 171, 1.5},
    {"이수진", 168, 0.4},
    {"김영준", 174, 1.2},
    {"박수규", 169, 0.8}
  };

  int nx = sizeof(x)/sizeof(x[0]);
  int vdist[VMAX];
  printf("이름      키      시력\n");
  printf("---------------------\n");
  for(int i = 0; i<nx; i++)
  {
    printf("%-18.18s%4d%5.1f\n",x[i].name, x[i].height, x[i].vision);
  }
  printf("\n평균 키: %5.1fcm\n", ave_height(x,nx));

  dist_vision(x, nx, vdist);
  printf("시력분포\n");
  for(int i = 0; i < VMAX; i++)
  {
    printf("%3.1f~: %2d명\n", i/10.0,vdist[i]);
  }

  return 0;
}

double ave_height(const phys_check dat[], int n)
{
  double sum = 0;
  for(int i =0; i < n; i++)
  {
    sum += dat[i].height;
  }
  return sum / n;
}

void dist_vision(const phys_check dat[], int n, int dist[])
{
  for (int i = 0; i < VMAX; i++)
    dist[i] = 0;
  for (int i = 0; i < n; i++)
  {
    if(dat[i].vision >= 0.0 && dat[i].vision <= VMAX/10.0)
    dist[(int)(dat[i].vision * 10)]++;
  }
}
