#include <stdio.h>

#define f(g1, g2) g1##g2

int main()
{
	int var12 = 100;
	printf("%d\n", f(var,12));

	return 0;
}

/* OUTPUT

100

f(var,12)
var12
100
*/
