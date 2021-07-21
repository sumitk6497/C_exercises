#include <stdio.h>

int main()
{
	int x = 10;
	int *p, *q;
	p = &x;
	q = p;

	printf("x = %d, *p = %d, *q = %d\n", x, *p, *q);

	x = 15;
	printf("x = %d, *p = %d, *q = %d\n", x, *p, *q);

	*p = 50;
	printf("x = %d, *p = %d, *q = %d\n", x, *p, *q);
	
	*q = 75;
	printf("x = %d, *p = %d, *q = %d\n", x, *p, *q);
	return 0;
}
