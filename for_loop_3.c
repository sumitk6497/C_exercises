#include <stdio.h>

int main()
{
	int i;

	for(i = 1; i != 16 ; i += i)
		printf("Github : %d\n", i);

	return 0;
}

/* OUTPUT

Github : 1 
Github : 2
Github : 4
Github : 8

*/
