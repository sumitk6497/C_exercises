#include <stdio.h>

int main()
{
	void *ptr;
	++ptr;
	
	printf("%p\n", ptr);			//0x1

	return 0;
}

