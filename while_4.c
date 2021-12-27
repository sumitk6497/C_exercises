#include <stdio.h>

int main()
{
	int cnt = 1;

	while(cnt >= 10)
	{
		printf("%d  ",cnt);
		cnt += 1;
	}

	printf("After loop cnt = %d\n",cnt);

	return 0;
}

/* OUTPUT

After loop cnt = 1

*/
