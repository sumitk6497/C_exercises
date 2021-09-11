#include <stdio.h>

int main()
{
	int arri[] = {20,23,25,28,20};

	int *ptr1 = &arri[0];
	int *ptr2 = ptr1 + 3;

	printf("*ptr1 = %d\n",*ptr1);				//20
	printf("*ptr2 = %d\n",*ptr2);				//28
	printf("ptr2 - ptr1 = %ld\n",ptr2 - ptr1);		//3

	return 0;
}
