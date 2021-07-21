#include <stdio.h>

int main()
{
	int x = 10;
	int *ptr = &x;

	printf("x = %d, &x = %p, *ptr = %d, ptr = %p\n", x, &x, *ptr, ptr);

	x = 15;
	printf("x = %d, &x = %p, *ptr = %d, ptr = %p\n", x, &x, *ptr, ptr);

	*ptr = 50;
	printf("x = %d, &x = %p, *ptr = %d, ptr = %p\n", x, &x, *ptr, ptr);
	return 0;
}
