#include <stdio.h>

int main()
{
	int x = 10;
	int y = (x++, x++, x++);
	int z = 2;

	z ^= x;
	printf("x = %d, y = %d, z = %d\n", x, y, z);		//13  12  15

	return 0;
}
