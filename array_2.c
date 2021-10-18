#include <stdio.h>

int main()
{
	int arr[5] = {1,2,3,4,5};

	printf("arr = %u   \narr+1 = %u   \n&arr+1 = %u\n", arr, arr+1, &arr+1);
	
	return 0;
}

/*
If base address is 2000 and size of int is 4 byte;
then 
arr = 2000
arr+1 = 2004
&arr+1 = 2020

*/
