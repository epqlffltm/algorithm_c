/*
2026-02-03
prime3
*/

#include <iostream>

int main(void)
{
  int prime[500];
  int ptr = 0;
  unsigned long long int count = 0;

  prime[ptr++] = 2; // 첫 번째 소수
  prime[ptr++] = 3; // 두 번째 소수

  // 5부터 홀수만 검사 (짝수는 이미 2로 나누어지므로 제외)
  for (int i = 5; i <= 1000; i += 2)
  {
    bool is_prime = true;
    for (int j = 1; prime[j] * prime[j] <= i; j++) // 핵심: 제곱근까지만 검사
    {
      count++;
      if (i % prime[j] == 0) // 나누어 떨어지면 소수가 아님
      {
        is_prime = false;
        break;
      }
    }
    if (is_prime)
    {
      prime[ptr++] = i;
    }
  }

  // 결과 출력
  for (int i = 0; i < ptr; i++)
  {
    std::cout << prime[i] << " ";
  }

  std::cout << "\n\n찾은 소수 개수: " << ptr << std::endl;
  std::cout << "총 연산 횟수: " << count << std::endl;

  return 0;
}