#include <stdio.h>
#include <string.h>

int main()
{
	if( printf("Hello") == strlen("Hello") )
		printf(" Friends\n");
	else
		printf(" Enemies\n");

	return 0;
}

/* OUTPUT

Hello Friends

Statement printf("Hello") will print "Hello" and return 5, 
and statement strlen("Hello") will return total number of characters (5), hence condition is true.

*/
