#include <stdio.h>

int main()
{
	typedef char* string;

	string myName="ABCDEFG";

	printf("myName = %s, size = %ld\n", myName, sizeof(myName));

	return 0;
}

/* OUTPUT

myName = ABCDEFG, size = 8

In this program char* has defined as string, statement string myName="ABCDEFG"; 
is char* myName="ABCDEFG" which is a character pointer, takes 8 bytes(on 64 bit compiler) in memory.

*/
