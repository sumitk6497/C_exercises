#include <stdio.h>

int main(void)
{
	int i = 10;
	int j = 20;
	int *const ptr = &i;		

	printf("*ptr : %d\n", *ptr);

	*ptr = 100;	
	printf("*ptr : %d\n", *ptr);

//	ptr = &j;			//ERROR : pointer ptr can't modified
	
	return 0;
}
