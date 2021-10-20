#include <stdio.h>

int main()
{
	static int i = 5;

	if(--i)
	{
		printf("%d\n",i);
		main();
	}

	return 0;
}

/* OUTPUT

4 3 2 1
*/
