#include <stdio.h>

int main()
{
	int check = 20;
	int arr[] = {10, 20, 30};

	switch(check)
	{
		case arr[0] : printf("Github\n");		//error: case label does not reduce to an integer constant
			  break;
		case arr[1] : printf("Programming\n");		//error: case label does not reduce to an integer constant
			  break;
		case arr[2] : printf("Coding\n");		//error: case label does not reduce to an integer constant
			  break;
		default : printf("C language\n");
	}
	
	return 0;
}

