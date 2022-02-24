#include <stdio.h>
#include <stdlib.h>

int main(int argc,char* argv[])
{
	int add;

	add = atoi(argv[1]) + atoi(argv[2]);		//addition of 1st & 2nd arguments

	printf("answer = %d\n",add);

	return 0;
}
