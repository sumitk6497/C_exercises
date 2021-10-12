#include <stdio.h>

#define a 10

int main()
{
	printf("%d\n", a);		//10

	#define a 50
	printf("%d\n", a);		//50

	return 0;
}

