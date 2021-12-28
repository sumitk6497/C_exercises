#include <stdio.h>

int main()
{
	int loop = 10;

	while(printf("Hello  ") && loop--);

	printf("\n");
	return 0;
}

/* OUTPUT

Hello Hello Hello Hello Hello Hello Hello Hello Hello Hello Hello (11 times)

*/
