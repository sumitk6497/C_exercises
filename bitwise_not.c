#include <stdio.h>

int main()
{
	int a = 0;
	int b = (~a == 1);

	printf("a = %d,  b = %d\n", a, b);		//0  0
	
	a = ~b;
	printf("a = %d,  b = %d\n", a, b);		//-1  0
	
	return 0;
}
