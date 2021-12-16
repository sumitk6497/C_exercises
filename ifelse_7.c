#include <stdio.h>
#define TRUE 1

int main()
{
	if(TRUE)
		printf("1");
		printf("2");
	else
		printf("3");
		printf("4");

	return 0;
}

/* OUTPUT

ERROR : misplaced if/illegal else without matching if.
You can use only one statement within the if( )without parenthesis {...} .

*/
