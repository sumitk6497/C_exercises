#include <stdio.h>

int main()
{
	int max = 5;
	int i = 0;
	
	for(;;)
	{
		i++;
		if(i> max)
			break;
		printf("i = %d\n",i);
	}

	return 0;
}

/* OUTPUT

i = 1
i = 2
i = 3
i = 4
i = 5

In this code,Loop can run infinitely if condition is set to TRUE always or no condition is specified, 
i.e. for(;;) but in this condition, we specify terminating in if statement and by break statement we exit the for loop.

*/
