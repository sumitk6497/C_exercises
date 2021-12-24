#include <stdio.h>

int main()
{
	int i;

	for(i = 0; i<10; ++i)
	{
		printf("#");
		if(i>6)
			continue;
		printf("%d\n",i);
	}

	printf("\n");
	return 0;
}

/* OUTPUT

#0
#1
#2
#3
#4
#5
#6
###

*/
