#include <stdio.h>

int main()
{
	static int var[5];
	int count=0;

	var[++count] = ++count;

	for(count=0;count<5;count++)
		printf("%d  ",var[count]);
     
	printf("\n");
	return 0;
}

/* OUTPUT

0  0  2  0  0

*/
