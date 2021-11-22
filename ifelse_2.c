#include <stdio.h>

int main()
{
	if(sizeof(int) > -1)
		printf("Yes\n");
	else
		printf("No\n");

	int res = sizeof(int) > -1;		//res = 0
	printf("res = %d\n", res);

	return 0;
}
