#include <stdio.h>

int x = 5;

int main()
{
	int arr[x];
	static int x = 0;

	x = sizeof(arr);

	printf("size of arr = %d\n", x);		//20
	printf("x<<2 = %d\n", x<<2);			//80

	return 0;
}
