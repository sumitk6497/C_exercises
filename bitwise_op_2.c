#include <stdio.h>

int main()
{
	char flag=0x0f;

	flag &= ~0x02;
	printf("%d  %x\n", flag, flag);			//13   d

	return 0;
}

