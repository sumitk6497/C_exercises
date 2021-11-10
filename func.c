#include <stdio.h>

int fun()
{
	puts("GitHub");
	return 10;
}

int main()
{
	printf("%ld\n", sizeof(fun()));			//4

	return 0;
}
