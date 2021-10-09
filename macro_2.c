#include <stdio.h>

#if X == 3
	#define Y 3
#else
	#define Y 5
#endif

int main()
{
	printf("Y = %d\n", Y);

	return 0;
}

/* OUTPUT

5	----- because X is not define here so it will go #else condition and define Y = 5

*/
