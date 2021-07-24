#include <stdio.h>

int main()
{
	int a[8] = {4,12,3,65,8,1,49,33};
	int *p = &a[2];


	for(int i=0; i < 8; i++)
		printf("%d  ", a[i]);
	printf("\n");

	printf("*p = %d\n", *p);
	printf("*(p--) = %d\n", *(p--));
	printf("*p = %d\n",*p);


	int *q = &a[5];

	printf("*q = %d\n", *q);
	printf("*(--q) = %d\n", *(--q));
	printf("*q = %d\n",*q);

	return 0;
}
