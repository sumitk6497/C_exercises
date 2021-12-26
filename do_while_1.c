#include <stdio.h>

int main()
{
	int cnt=1;

	do
	{
		printf("%d,",cnt);
		cnt+=1;
	} while(cnt>=10);

	printf("\nAfter loop cnt = %d\n",cnt);

	return 0;
}

/* OUTPUT

1,
After loop cnt=2
do while is an exit controlled loop, here loop body executed first, then condition will be checked.

*/
