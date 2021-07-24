//Sum of array elements using pointer

#include <stdio.h>

int main()
{
	int a[5];
	int *p;
	int sum = 0;
	
	*a = 10;
	*(a+1) = 5;
	*(a+2) = *(a+3) = 12;
	*(a+4) = 6;


	for(int i=0; i < 5; i++)
		printf("%d  ", *(a+i));
	printf("\n");

	for(p = a; p <= a + 4; p++)
		sum += *p;

	printf("Sum = %d\n", sum);
	return 0;
}
