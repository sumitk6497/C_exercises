#include <stdio.h>

int main()
{
	int x;
	float y=7.0;
	
	switch(x=y+1)
	{
		case 8: 
		    printf("It's Eight."); 
		    break;
		    
		default: 
		    printf("Oops No choice here!!!");
	}

	printf("\n");

	return 0;
}

/* OUTPUT

It's Eight.
Here, x=y+1 will be 8 – because x is an integer variable so final value that will return through this expression is 8. 

*/
