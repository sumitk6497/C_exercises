#include <stdio.h>

int main()
{
	static int x[]={'A','B','C','D','E'}, tally;
	int x_size = sizeof(x)/sizeof(int);

	for(tally = 0;tally < x_size ; tally += 1)
		printf("%c, %c, %c\n",*(x + tally)+1, x[tally]+1, *(tally + x)+1);

	return 0;
}

/* OUTPUT

B, B, B
C, C, C
D, D, D
E, E, E
F, F, F

*/
