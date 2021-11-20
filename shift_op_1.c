#include <stdio.h>

int main()
{
	int y = 570;

	y = y >> 4;
	printf("%d\n", y);		//35
	
	y = y << 6;
	printf("%d\n", y);		//2240

	return 0;
}
