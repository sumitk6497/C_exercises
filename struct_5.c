#include <stdio.h>

int main()
{
	typedef struct tag
	{
	    char str[10];
	    int a;
	}har;

	
	har h1, h2 = {"IHelp",10};
	h1 = h2;
	h1.str[1] = 'h';

	printf("%s, %d\n", h1.str, h1.a);

	return 0;
}

/* OUTPUT

Ihelp,10

It is possible to copy one structure variable into another like h1=h2. Hence value of h2.str is assigned to h1.str.

*/
