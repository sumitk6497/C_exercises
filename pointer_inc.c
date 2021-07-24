#include <stdio.h>

int main()
{
	int a[6] = {4,12,3,65,8,1};
	int *p = a;
	int *q = a;
	int *r = a;


	for(int i=0; i < 6; i++)
		printf("%d  ", a[i]);
	printf("\n");

	++*p;
	printf("++*p = %d\n", *p);

	*q++;
	printf("*q++ = %d\n", *q);

	*++r;
	printf("*++r = %d\n", *r);
	return 0;
}
