/*
2025-11-24
신입용 안전한 동적 배열 입력 예제
- 입력 검증
- 범위 체크
- 동적 메모리 할당/해제
- 안전한 scanf 처리
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int na = 0;

    // 안전한 입력 반복문
    while (1) {
        printf("양의 정수를 입력하세요: ");
        if (scanf("%d", &na) != 1) {      // 정수 입력 체크
            printf("숫자만 입력하세요.\n");
            int c;
            while ((c = getchar()) != '\n' && c != EOF); // 버퍼 비우기
            continue;
        }

        if (na <= 0) {                     // 범위 체크
            printf("1 이상의 양수만 입력 가능합니다.\n");
            continue;
        }

        if (na > 10000) {                  // 지나치게 큰 입력 방지
            printf("너무 큰 숫자입니다. 최대 10000까지 입력 가능합니다.\n");
            continue;
        }

        break; // 올바른 입력이면 반복 종료
    }

    // 동적 메모리 할당
    int *a = (int *)calloc(na, sizeof(int));
    if (a == NULL) {
        fprintf(stderr, "메모리 확보 실패\n");
        exit(1);
    }

    // 배열 값 입력
    for (int i = 0; i < na; i++) {
        while (1) {
            printf("a[%d] = ", i);
            if (scanf("%d", &a[i]) != 1) {
                printf("숫자만 입력하세요.\n");
                int c;
                while ((c = getchar()) != '\n' && c != EOF);
                continue;
            }
            break;
        }
    }

    // 입력한 값 출력
    printf("\n입력된 배열 값:\n");
    for (int i = 0; i < na; i++) {
        printf("%d\n", a[i]);
    }

    // 메모리 해제
    free(a);
    a = NULL; // 포인터 초기화

    return 0;
}
