#include <stdio.h>

int main()
{
	char result;
	char str[] = "\0IncludeHelp";

	result = printf("%s",str);

	if(result)	
		printf("\nTRUE");
	else
		printf("\nFALSE");

	printf("\n");
	return 0;
}

/* OUTPUT


FALSE

str[]="\0IncludeHelp", str will be terminated by \0.

*/


