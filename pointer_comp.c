#include <stdio.h>

int main()
{
	int a[6] = {4,12,3,65,8,1};
	int *p = &a[2];
	int *q = &a[4];


	printf("p >= q : %d\n", p >= q);
	printf("p <= q : %d\n", p <= q);

	q = &a[2];
	printf("p == q : %d\n", p == q);

	return 0;
}
