#include <stdio.h>

int main()
{
	int j = 0;

	for(; j < 10; )
	{
	    if(j < 10)
		printf("Github : %d  ", j++);
	    else
		continue;

	    printf("Coding\n");
	}

	return 0;
}

/* OUTPUT

Github : 0 Coding 
Github : 1 Coding
Github : 2 Coding
Github : 3 Coding
Github : 4 Coding
Github : 5 Coding
Github : 6 Coding
Github : 7 Coding
Github : 8 Coding
Github : 9 Coding

*/
