#include <stdio.h>

int main()
{
	int i = 1024;

	for(; i; i >>= 1)
		printf("Github : %d\n", i);

	return 0;
}

/* OUTPUT

Github : 1024
Github : 512
Github : 256
Github : 128
Github : 64
Github : 32
Github : 16
Github : 8
Github : 4
Github : 2
Github : 1

*/
