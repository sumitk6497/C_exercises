#include <stdio.h>

int main()
{
	char var=0x04;

	var = var | 0x04;
	printf("%d, ",var);		//4
	
	var |= 0x01;
	printf("%d\n",var);		//5
	
	return 0;
}

