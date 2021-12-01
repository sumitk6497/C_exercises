#include <stdio.h>

int main()
{
	int x;
	
	x = (printf("AA ") || printf("BB "));
	printf("%d\n",x);

	x= (printf("AA ") && printf("BB "));
	printf("%d\n",x);

	return 0;
}

/* OUTPUT

AA 1
AA BB 1

*/
