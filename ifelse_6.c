#include <stdio.h>
int main()
{
	if( (-100 && 100)||(20 && -20) )
		printf("%s","Condition is true.");
	else
		printf("%s","Condition is false.");

	printf("\n");
	return 0;
}

/* OUTPUT

Condition is true.
Any non zero value is treated as true for conidion.
Consider the expressions: if( (-100 && 100)||(20 && -20) )
=if( (1) || (1) )
=if(1)

*/
