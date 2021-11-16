#include <stdio.h>

int main()
{
	int a = 2, b = 5;

	printf("a = %d,  b = %d\n", a, b);		//2  5
	
	a = a^b;
	printf("a = %d,  b = %d\n", a, b);		//7  5
	
	b = b^a;
	printf("a = %d,  b = %d\n", a, b);		//7  2

	return 0;
}
