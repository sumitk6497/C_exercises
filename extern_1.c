#include <stdio.h>
 
int main()
{
	int anyVar = 10;

	printf("%d\n",10);
	printf("%d\n",anyVar);

	return 0;
}

extern int anyVar;


/* OUTPUT

10
10

The extern variable cannot initialize with block scope, and you are free to declare them outside of block scope, 
extern makes the variable accessible in other files.

*/
