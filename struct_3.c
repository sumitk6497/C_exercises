#include <stdio.h>

int main()
{
	struct sample
	{
	    int a;
	    int b;
	    struct sample *s;
	}t;
 
	printf("%ld, %ld\n",sizeof(struct sample), sizeof(t.s));

	return 0;
}

/* OUTPUT

16, 8

There are 3 members with in structure (a,b,s);
a and b is an integer variable that takes 4-4 bytes in memory;
s is self-refrencial pointer of sample and pointer also takes 8 bytes in memory.

*/
