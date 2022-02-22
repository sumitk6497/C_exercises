#include <stdio.h>

int main(int counter,char** arg)
{
	unsigned int tally;
	int num = 1;

	for(tally=0;tally< counter; tally+=1)
		printf("arg %d - %s\n", num++, arg[tally]);

	return 0;
}
