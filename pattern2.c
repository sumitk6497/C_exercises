#include <stdio.h>

int main()
{
	int i,j;
	char charVal = 'A';
 
	for(i=5; i>=1; i--)
	{
		for(j=0; j < i; j++)
			printf("%c ",(charVal + j));
		printf("\n");
	}

	return 0;
}

/* OUTPUT

A B C D E
A B C D
A B C
A B
A

*/
