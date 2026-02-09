/*
 * 2026-02-09
 * double pointer test
*/

#include<stdio.h>

void clock(int n);

int main(void)
{
	int ary[] = {1,2,3};
	int *pary;

	pary = ary;

	printf("ary[1] = %d\n",ary[1]);
	printf("pary[1] = %d\n",pary[1]);
	printf("*(pary+1) = %d\n",*(pary+1));

	clock(ary[1]);
	clock(pary[1]);
	clock(*(pary+1));

	return 0;
}

void clock(int n)
{
	int m = n;
	printf("%d\n",m);
}
