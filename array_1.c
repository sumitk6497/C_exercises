#include <stdio.h>

int main()
{
	int arr[5];

	printf("%u\n", arr);
	
	arr[1] = 5;
	printf("%d\n", arr[0]);
	printf("%d\n", arr[1]);

	return 0;
}
