#include <stdio.h>

int main()
{
	int x=10;
    
	x &= ~2;
	printf(" x = %d\n",x);		//8
    
	return 0;
}

