#include <stdio.h>

int main()
{
	int token=0;

	for( ; ;)
	{
		if(token==10)
		    break;
		printf("%d ",++token);
	}

	printf("\n");

	return 0;
}

/* OUTPUT

1 2 3 4 5 6 7 8 9 10
for(; ;) it is possible in c, there is no need to place condition with in the for(), you can place condition with in the body of the loop.

*/
