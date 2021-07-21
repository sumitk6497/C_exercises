#include <stdio.h>

int main()
{
	int x = 10, y =20;
	int *p, *q;
	p = &x;
	q = &y;

	printf("x = %d, *p = %d, y = %d, *q = %d\n", x, *p, y, *q);

	*q = *p;
	printf("x = %d, *p = %d, y = %d, *q = %d\n", x, *p, y, *q);

	x = 50;
	printf("x = %d, *p = %d, y = %d, *q = %d\n", x, *p, y, *q);
	
	y = 75;
	printf("x = %d, *p = %d, y = %d, *q = %d\n", x, *p, y, *q);
	
	*p = 80;
	printf("x = %d, *p = %d, y = %d, *q = %d\n", x, *p, y, *q);
	return 0;
}
