#include <stdio.h>

int main()
{
	int i = 12;
	int j = sizeof(i++);

	printf("i = %d, j = %d\n", i, j);		//12  4

	return 0;
}
