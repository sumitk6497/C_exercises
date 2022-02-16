#include <stdio.h>

int main()
{
	char ch = 10;
	void *ptr = &ch;

	printf("%d, %d\n",*(char*)ptr, ++(*(char*)ptr));		//11  11

	return 0;
}
