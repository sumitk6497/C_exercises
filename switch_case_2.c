#include <stdio.h>
#define EVEN 0
#define ODD 1

int main()
{
	int i = 3;
	switch(i & 1)
	{
		case EVEN : printf("Github\n");
			  break;
		case ODD : printf("Programming\n");
			  break;
		default : printf("C language\n");
	}
	
	return 0;
}

/* OUTPUT

Programming

*/
