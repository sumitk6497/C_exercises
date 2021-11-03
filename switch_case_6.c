#include <stdio.h>

int main()
{
	int a = 5;
	switch(a)
	{
		default : a = 4;
		case 6 : a--;
		case 5 : a + 1;
		case 1 : a - 1;
	}

	printf("a = %d\n", a);			//5
	
	return 0;
}

