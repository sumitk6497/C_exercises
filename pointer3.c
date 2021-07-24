//Sum of array elements using pointer

#include <stdio.h>

int main()
{
	int a[5] = {23,7,5,15,10};
	int *p;
	int sum = 0;

	for(p = &a[0]; p <= &a[4]; p++)
		sum += *p;

	printf("Sum = %d\n", sum);
	return 0;
}
