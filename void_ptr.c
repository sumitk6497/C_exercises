#include <stdio.h>

int main()
{
	int     iVal;
	char    cVal;
	void    *ptr;   		// void pointer

	iVal = 50; 
	cVal = 65;

	ptr = &iVal;
	printf("value = %d, size = %ld\n", *(int*)ptr, sizeof(ptr));		//50  8

	ptr = &cVal;
	printf("value = %d, size = %ld\n", *(char*)ptr, sizeof(ptr));		//65  8

	return 0;
}
