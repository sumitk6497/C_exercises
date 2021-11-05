#include <stdio.h> 

int main()
{
	const char *a = "Hello\0World";
	
	printf("%s\n", a);			//Hello

	return 0;
}
