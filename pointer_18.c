#include <stdio.h>

/* OUTPUT 

ERROR: unexpected end of file found in comment.

The compiler is treated the operator / and * as /*, that happens to be the starting of comment.
To fix the error, use either *pa/ *pb (space between operators) or *pa/(*pb).

*/

int main()
{
	int a = 10,b = 2;
	
	int *pa = &a,*pb = &b;

	printf("value = %d", *pa/*pb);
	return 0;
}


