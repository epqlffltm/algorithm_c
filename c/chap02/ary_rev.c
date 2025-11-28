/*
2025-11-27
배열 정렬
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));

    int idx = rand() % 5 + 5;   // 5~9 개
    printf("요소 개수: %d\n", idx);

    int *pary = malloc(sizeof(int) * idx);
    if (pary == NULL) 
    {
        perror("malloc 실패");
        return 1;
    }

    // 1) 배열을 랜덤 값으로 채우기
    for (int i = 0; i < idx; i++) 
    {
        pary[i] = rand() % 10000;
    }

    // 2) 삽입 정렬
    for (int i = 1; i < idx; i++) 
    {      // i는 1부터 시작
        int key = pary[i];              // 삽입할 값
        int j = i - 1;

        // 이미 정렬된 구간 [0..j]에서 key보다 큰 값들을 한 칸씩 뒤로 밀기
        while (j >= 0 && pary[j] > key) 
        {
            pary[j + 1] = pary[j];
            j--;
        }
        pary[j + 1] = key;
    }

    // 3) 결과 출력
    for (int i = 0; i < idx; i++) 
    {
        printf("%d  ", pary[i]);
    }
    printf("\n");
    
    for (int i = 0; i < idx / 2; i++)
    {
    int j = idx - 1 - i;   // 뒤에서부터 짝꿍 인덱스
    pary[i] ^= pary[j];
    pary[j] ^= pary[i];
    pary[i] ^= pary[j];
  }


    for (int i = 0; i < idx; i++) 
    {
        printf("%d  ", pary[i]);
    }

    printf("\n"); 


    free(pary);  // 메모리 해제

    return 0;
}
