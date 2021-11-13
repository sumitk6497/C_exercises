#include <stdio.h>

int main()
{
	int a = 10, b = 20, c = 30;

	if(c > b > a)
		printf("TRUE\n");
	else
		printf("FALSE\n");
	
	int res = c > b > a;
	printf("res = %d\n", res);		//0

	return 0;
}
