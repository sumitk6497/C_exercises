#include <stdio.h>

int main()
{
	int i = 3;
	while(i--)
	{
		int i = 100;
		i--;
		printf("%d\n", i);
	}
	
	return 0;
}

/* OUTPUT

99
99
99

*/
