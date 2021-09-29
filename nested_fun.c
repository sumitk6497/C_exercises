#include <stdio.h>

int main(void)
{
	auto int view(); 		//function declaration with auto keyword
	
	view(); 			//function calling
	
	printf("Main function\n");

	int view()			//function defination
	{
		printf("View function\n");
		return 1;
	}

	printf("END Program\n");
	return 0;
}

/* OUTPUT

View function
Main function
END Program

*/
