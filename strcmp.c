#include <stdio.h>
#include <string.h>

int main()
{
	int val = 0;
	char str[] = "IncludeHelp.Com";
 
	val = strcmp(str,"includehelp.com");
	
	if(val == 0)
		printf("both strings are equal.\n");
	else
		printf("both strings are unequal.\n");

	return 0;
}
