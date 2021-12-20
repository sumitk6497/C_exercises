#include <stdio.h>

#define TRUE 1

int main()
{
	switch(TRUE)
	{   
		printf("Hello");
	}

	return 0;
}

/*

No Output
There is no ERROR in this program, but "Hello" will not print. 
Because switch statement contains value 1 (TRUE) and there is no case with value 1 even there is no default case, 
so program’s execution will not jump into switch body.

*/
