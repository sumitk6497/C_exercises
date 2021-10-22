#include <stdio.h>

int fun()
{
	static int num = 16;
	return num--;
}

int main()
{
	for(fun(); fun(); fun())
		printf("%d  ", fun());

	printf("\n");
	return 0;
}

/* OUTPUT

14  11  8  5  2

*/
