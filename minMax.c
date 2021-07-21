#include <stdio.h>

void minMax(int arr[], int len, int *min, int *max)
{
	*min = *max = arr[0];
	int i;
	for(i = 1; i < len; i++)
	{
	    if(arr[i] < *min)
	        *min = arr[i];
	    if(arr[i] > *max)
	        *max = arr[i];
	}
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
	int arr[] = {42,10,8,87,56,12,45,9,31,67,51,11};
	int min, max;
	int len = sizeof(arr)/sizeof(arr[0]);

	display(arr, len);
	minMax(arr, len, &min, &max);

	printf("min value = %d, max value = %d\n", min, max);

	return 0;
}
