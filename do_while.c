#include <stdio.h>

int main()
{
	int a = 5, b = 10;
	do
	{
		printf("a = %d, b = %d\n", a, b);
		b--;
	}while(a--);

	printf("Outside.........\n");
	printf("a = %d, b = %d\n", a, b);

	return 0;
}

/* OUTPUT

a = 5, b = 10
a = 4, b = 9
a = 3, b = 8
a = 2, b = 7
a = 1, b = 6
a = 0, b = 5
Outside.........
a = -1, b = 4

*/
