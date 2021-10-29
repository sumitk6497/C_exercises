#include <stdio.h>

int main()
{
	int i = 1, j;

	for(; ;)
	{
	    if(i)
		j = --i;
	    if(j < 10)
		printf("Github : %d\n", j++);
	    else
		break;
	}

	return 0;
}

/* OUTPUT

Github : 0 
Github : 1 
Github : 2 
Github : 3
Github : 4
Github : 5
Github : 6
Github : 7
Github : 8
Github : 9

*/
