#include <stdio.h>

int main()
{
	int x = 10;
	static int y = x;		//ERROR : initializer element is not constant

	if(x == y)
		printf("Equal\n");
	else if(x > y)
		printf("Greater\n");
	else
		printf("Less\n");

	return 0;
}
