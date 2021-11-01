#include <stdio.h>

int main()
{
	int i = 3;
	switch(i)
	{
		printf("Outside case\n");		//warning: statement will never be executed [-Wswitch-unreachable]
		case 1 : printf("Github\n");
			  break;
		case 2 : printf("Programming\n");
			  break;
		default : printf("C language\n");
	}
	
	return 0;
}

/* OUTPUT

C language

*/
