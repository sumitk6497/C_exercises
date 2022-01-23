#include <stdio.h>

int main()
{
	union values
	{
	    unsigned char a;
	    unsigned char b;
	    unsigned int  c;
	};
 
	union values val;
	val.a = 1;
	val.b = 2;
	val.c = 300;
 
	printf("%d, %d, %d\n", val.a, val.b, val.c);

	return 0;
}

/* OUTPUT

44, 44, 300

In printf() statement val.a and val.b will print the value of first Byte ( 8 bits),
because a and b are character and it takes one Byte only, but val.c will print the value of 8 bytes.
So, value of val.a and val.b will be 00101100 (44) and value of val.c will be 00000001 00101100 (300).
*/
