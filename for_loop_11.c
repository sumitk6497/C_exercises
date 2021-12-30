#include <stdio.h>

int main()
{
	int i,k;

	for (i=0, k=0; (i< 5 && k < 3); i++, k++)
	{
		;
	}
	
	printf("%d\n",i);
	
	return 0;
}

/* OUTPUT

3

Variables ‘i’ and ‘k’ are initialized to 0; condition is to execute loop when ‘i’ is lesser than ‘5’and ‘k’ is lesser than ‘ 3’; iteration is increment of counter variables ‘i’ and ‘k’.

*/
