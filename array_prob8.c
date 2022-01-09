#include <stdio.h>

int main()
{
	int a[5] = {0x00, 0x01, 0x02, 0x03, 0x04};
	int i = 4;

	while(a[i])
	{
		printf("%02d  ",*a+i);
		--i;
	}

	printf("\n");
	return 0;
}

/* OUTPUT

04 03 02 01

0x00,0x01,0x02,0x03,0x04,0x05 are hex values of 0,1,2,3,4,5.
while(a[i]) will be terminated by a[0], becuase value of a[0] is 0 hence, 04,03,03,01 will print.

*/
