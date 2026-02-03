/*
2026-02-03
소수 나열 버전
*/

#include <iostream>

int main(void)
{
  unsigned long long int counter = 0; // 연산 횟수 기록
  const int n = 1000;

  for (int i = 2; i <= n; i++) // 2부터 n까지 검사
  {
    int j;
    for (j = 2; j < i; j++) // 2부터 i-1까지 나눔
    {
      counter++;
      if (i % j == 0) // 나누어 떨어지면 소수 아님
      break;
    }
    // 루프를 끝까지 다 돌았다면(중간에 break 안 걸림) 소수
    if (i == j) 
    {
      std::cout << i << " ";
    }
  }

  std::cout << "\n\n전체 나눗셈 횟수: " << counter << std::endl;
  
  return 0;
}