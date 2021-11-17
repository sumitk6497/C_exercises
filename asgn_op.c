#include <stdio.h>

int main()
{
	int x = 10;
	int y = 20;

	printf("x = %d,  y = %d\n",x,y);		//10  20
	
	x += y += 10;
	printf("x = %d,  y = %d\n",x,y);		//40  30

	return 0;
}
