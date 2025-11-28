/*
2025-11-26
rand_array_stats
랜덤값을 배열에 넣고 정렬,최솟갑, 중간갑, 최댓값 출력
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void quick(int *ary, int left, int right, int *done_counter);

int main(void) {
    srand(time(NULL));
    int n = 10 + rand() % 10;
    int *ary = malloc(sizeof(int) * n);
    if (!ary) { fprintf(stderr, "malloc failed\n"); exit(EXIT_FAILURE); }

    for (int i = 0; i < n; ++i) ary[i] = rand() % 100;

    int done = 0;
    quick(ary, 0, n - 1, &done);

    // quick()가 반환했다면 정렬이 완료된 상태
    printf("quick returned, done_counter=%d\n", done);
    for (int i = 0; i < n; ++i) printf("%d ", ary[i]);
    printf("\n");

    free(ary);
    return 0;
}

void quick(int *ary, int left, int right, int *done_counter) {
    if (left >= right) {
        (*done_counter)++; // 하나의 "완료된 구간" 카운트
        return;
    }

    int i = left, j = right;
    int pivot = ary[(left + right) / 2];

    while (i <= j) {
        while (ary[i] < pivot) i++;
        while (ary[j] > pivot) j--;
        if (i <= j) {
            int tmp = ary[i]; ary[i] = ary[j]; ary[j] = tmp;
            i++; j--;
        }
    }

    quick(ary, left, j, done_counter);
    quick(ary, i, right, done_counter);
}
