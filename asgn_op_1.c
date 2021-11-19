#include <stdio.h>

int main()
{
	int x = 0;
	int y;

	printf("x = %d,  y = %d\n",x,y);		//0  Garbage
	
	y = (x == (x == 1));
	printf("x = %d,  y = %d\n",x,y);		//0  1

	return 0;
}
