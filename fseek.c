#include <stdio.h>

int main()
{
	FILE *fp;
	fp = fopen("test.txt", "r");
	
	fseek(fp, 0, SEEK_END);			//moving pointer to end
	
	printf("%ld\n", ftell(fp));		//printing position of pointer

	return 0;
}

