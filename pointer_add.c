#include <stdio.h>

int main()
{
	int a[8] = {1,2,3,4,5,6,7,8};
	int *p = &a[0];

	printf("p = %d, *p+3 = %d\n",*p, *(p+3));

	p = p + 2;
	printf("p = %d, *p+3 = %d\n",*p, *(p+3));

	return 0;
}
