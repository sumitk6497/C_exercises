#include <stdio.h>

int main()
{
	union test
	{
	    int i;
	    int j;
	};
     
	union test var;
	var.i = 10;

	printf("i = %d, j = %d, size = %ld\n",var.i,var.j, sizeof(union test));		//10  10  4

	return 0;
}
