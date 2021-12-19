#include <stdio.h>

int main()
{
	int i;

	for(i=0; i< 5; i++)
	{
		if(i*i > 30 )
		    goto lbl;
		else
		    printf("%d:",i);

		lbl:
		    printf("Help  ");
 
	}

	printf("\n");
	return 0;
}

/* OUTPUT

0:Help  1:Help  2:Help  3:Help  4:Help

*/
