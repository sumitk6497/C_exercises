#include <stdio.h>

int main()
{
	struct site
	{
		char var;
		int num;
	};
	struct site ptr;

	ptr.var = 'a';
	ptr.num = 6;


	printf("Character : %c\n", ptr.var);			//a
	printf("Number : %d\n", ptr.num);			//6
	printf("Struct Size : %ld\n", sizeof(struct site));	//8

	return 0;
}
