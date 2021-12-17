#include <stdio.h>
#define TRUE 1

int main()
{
	int x = 100;
	if(x > 20)
		printf("Github");
		if(x < 20)
			printf("Coding");
	else
		printf(" Programming");

	printf("\n");
	return 0;
}

/* OUTPUT

Github Programming

else is treated as else part of inner condition (x < 20)

*/
