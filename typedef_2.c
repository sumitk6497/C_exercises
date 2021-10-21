#include <stdio.h>

int main()
{
	typedef int i[5];
	i a = {1,2,3,4,5};

	for(int i=0; i < 5; i++)
		printf("%d  ", a[i]);
	
	printf("\n");

	return 0;
}
