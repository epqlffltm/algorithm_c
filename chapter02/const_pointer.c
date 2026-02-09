/*
 *2026-02-09
 포인터 상수 연습.
 */

#include<stdio.h>

int main(void)
{
	int n = 5;
	//const int m = 10;
	int mm = 10;
	const int *pn;
	int *pm;

	pn = &n;
	//pm = &m;
	pm = &mm;

	printf("%d\n",*pn);
	printf("%d\n",*pm);

	return 0;
}
