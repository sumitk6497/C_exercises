#include <stdio.h>

int main()
{
	int i;
	char str[]="IncludeHelp";

	for(i=0; str[i]!='\0'; i++)
	{
		putchar(str[i]); 
		putchar('*');
	}

	printf("\n");
	return 0;
}

/* OUTPUT

I*n*c*l*u*d*e*H*e*l*p*

*/
