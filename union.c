#include <stdio.h>

int main()
{
	union site
	{
		char var;
		int num;
	};
	union site ptr;

	ptr.var = 'a';
	printf("Character : %c\n", ptr.var);			//a
	
	ptr.num = 6;
	printf("Number : %d\n", ptr.num);			//6
	
	printf("Union Size : %ld\n", sizeof(union site));	//4

	return 0;
}
