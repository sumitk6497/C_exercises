#include <stdio.h>

int *findMid(int arr[], int len)
{
	return &arr[len/2];
}

void display(int arr[], int len)
{
	int i;
	for(i = 0; i < len; i++)
		printf("%d  ", arr[i]);
	printf("\n");
}

int main()
{
	int arr[] = {1,2,3,4,5,6,7};
	int len = sizeof(arr)/sizeof(arr[0]);

	display(arr, len);
	int *mid = findMid(arr, len);

	printf("mid value = %d\n", *mid);

	return 0;
}
