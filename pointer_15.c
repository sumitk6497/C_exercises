#include <stdio.h>
#define VAL 32

int main()
{
	char arr[] = "Github";

	*(arr + 0) &= ~VAL;
	printf("arr = %s\n", arr);			//Github
	
	*(arr + 5) &= ~VAL;
	printf("arr = %s\n", arr);			//GithuB

	return 0;
}
