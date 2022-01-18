#include <stdio.h>
#include <string.h>

int main()
{
	char str[]="Github";
	
	while(str + strlen(str))
		printf("* ");

	return 0;
}

/* OUTPUT

***... infinite times

str + strlen(str) in this expression str is a pointer that return memory address,
and str + strlen(str) = str+5, also an address (integer value), so expression str+strlen(str) will return non zero value.

*/
