#include <stdio.h>

int main()
{
	int a[][3] = {1,2,3,4,5,6};
	int (*p)[3] = a;

	printf("%d  %d\n",(*p)[1], (*p)[2]);		//2 3

	++p;
	printf("%d  %d\n",(*p)[1], (*p)[2]);		//5 6

	printf("-------------------------------------------\n");

	unsigned int x[4][3] = {{1,2,3}, {4,5,6}, {7,8,9}, {10,11,12}};

	printf("%u  %u  %u\n",x+3, *(x+3), *(x+2)+3);	//same address
	printf("%u  %u  %u\n",**(x+3), *(x), *(*(x+1)+3));	//same address


	return 0;
}
