#include <stdio.h>

int main()
{
	//typedef static int *i;
	typedef int *i;
	int j = 10;
	i a = &j;

	printf("%d\n", *a);

	return 0;
}
