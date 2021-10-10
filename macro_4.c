#include <stdio.h>

#define SQUARE(x) x*x

int main()
{
	int x;
	x = 36/SQUARE(6);
	
	printf("x = %d\n", x);

	return 0;
}

/* OUTPUT

36

---- because line 8 will expend like 
x = 36/6*6;
x = 6*6;
x = 36;

*/
