#include <stdio.h>

int main()
{
	int n,i=0;
	
	while(scanf("%d",&n) == 1)
	{
		printf("END\n");
	}

	return 0;
}

/* OUTPUT

No Output or END

scanf function return integer value i.e. 1 if successful read data otherwise 0 in unsuccessfully read data.
1_ For, input ‘a’, scanf return 0 and while will not execute.
2_ For, input 1, scanf return 1 and while will be execute.

*/
