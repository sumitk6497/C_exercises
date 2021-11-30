#include <stdio.h>

int main()
{   
	unsigned short var='B';

	var += 2;
	var++;

	printf("var : %c , %d\n", var,var);		//E  69

	return 0;
}
