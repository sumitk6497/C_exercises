#include <stdio.h>

int main(void)
{
	int i = 10;
	int j = 20;
	const int *ptr = &i;		//OR  int const *ptr = &i

	printf("*ptr : %d\n", *ptr);

//	*ptr = 100;			//ERROR : pointed object can't be modified using pointer ptr
	
	ptr = &j;
	printf("*ptr : %d\n", *ptr);

	return 0;
}
