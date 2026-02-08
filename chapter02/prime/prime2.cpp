/*
2026-02-03
prime2
*/

#include<iostream>

int main(void)
{
  int prime[500];
  int ptr = 0;
  unsigned long long int count = 0;

  prime[ptr++] = 2;

  for(int i = 3; i <=1000; i+=2)//홀수만
  {
    int j = 0;
    for(j = 0; j<ptr; j++)
    {
      count++;
      if(i % prime[j] == 0)
      break;
    }
    if(ptr == j)
    prime[ptr++] = i;
  }
  for(int i=0; i<ptr; i++)
  {
    std::cout<<prime[i]<<std::endl;
  }
  std::cout<<"count: "<<count<<std::endl;

  return 0;
}