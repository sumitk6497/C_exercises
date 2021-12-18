#include <stdio.h>

int main()
{
	int a=10;

	if(10L == a)
		printf("10L");
	else if(10==a)
		printf("10");
	else
		printf("0");

	printf("\n");
	return 0;
}

/* OUTPUT

10L

*/
