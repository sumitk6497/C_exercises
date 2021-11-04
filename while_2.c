#include <stdio.h>

int main()
{
	int i = 1, x = 1;
	while(x <= 50)
	{
		x = 2*x;
		i++;
		printf("i = %d   x = %d\n", i, x);
	}
	
	return 0;
}

/* OUTPUT

i = 2   x = 2
i = 3   x = 4
i = 4   x = 8
i = 5   x = 16
i = 6   x = 32
i = 7   x = 64

*/
