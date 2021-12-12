#include <stdio.h>

int main()
{
	char val = 1;

	if(val--==0)
		printf("TRUE\n");
	else
		printf("FALSE\n");		//FALSE

	return 0;
}
