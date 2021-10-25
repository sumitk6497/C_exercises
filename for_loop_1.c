#include <stdio.h>

int main()
{
	int i;

	for(i = 9; i != 0; i--)
		printf("i : %d\n", i--);

	return 0;
}

/* OUTPUT

Infinite loop
*/
