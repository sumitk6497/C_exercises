#include <stdio.h>

int main()
{
	char cnt=0;

	for(; cnt++; printf("%d",cnt));
	
	printf("%d",cnt);

	printf("\n");
	return 0;
}

/* OUTPUT

1
Before entering into the for loop the CHECK CONDITION is "evaluated". 
Here it evaluates to 0 (false) and comes out of the loop, and cnt is incremented (note the semicolon after the for loop).

*/
