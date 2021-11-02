#include <stdio.h>

int main()
{
	char check = 'a';
	switch(check)
	{
		case 'a' || 1 : printf("Github\n");		//error: duplicate case value
			  break;
		case 'b' || 2 : printf("Programming\n");	//error: duplicate case value
			  break;
		default : printf("C language\n");
	}
	
	return 0;
}

