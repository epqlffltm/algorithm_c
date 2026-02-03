/*

2026-02-03

10진수를 2진수, 8진수 16진수로 수정하기

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 함수 선언
int card_conv(unsigned x, int n, char d[]);

int main(void)
{
  srand((unsigned int)time(NULL));

  // 변환할 무작위 10진수 생성
  unsigned value = rand() % 100 + 1; 
  char result[64]; // 변환된 문자열을 담을 배열

  printf("10진수 대상: %u\n\n", value);

  // 2진수 변환
  int d2 = card_conv(value, 2, result);
  printf(" 2진수: %s\n", result);

  // 8진수 변환
  int d8 = card_conv(value, 8, result);
  printf(" 8진수: %s\n", result);

  // 16진수 변환
  int d16 = card_conv(value, 16, result);
  printf("16진수: %s\n", result);

  return 0;
}

int card_conv(unsigned x, int n, char d[])
{
  char dchar[] = "0123456789ABCDEF";
  int digits = 0;

  if (x == 0) 
  {
    d[digits++] = dchar[0];
  } 
  else 
  {
    while (x) 
    {
      d[digits++] = dchar[x % n]; // 나머지를 문자로 저장
      x /= n;
    }
  }

  // 배열 뒤집기: 나머지가 거꾸로 쌓여있기 때문에 역순으로 정렬
  for (int i = 0; i < digits / 2; i++) 
  {
    char temp = d[i];
    d[i] = d[digits - i - 1];
    d[digits - i - 1] = temp;
  }

  d[digits] = '\0'; // 문자열의 끝을 알리는 NULL 문자 추가 필수!

  return digits;
}