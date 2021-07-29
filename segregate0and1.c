//Segregate 0s on left side and 1s on right side of array only one traverse

#include <stdio.h>

void segregate0and1(int arr[], int n)
{
	int left = 0, right = n - 1;

	while(left < right)
	{
	    while(arr[left] == 0 && left < right)
	        left++;

	    while(arr[right] == 1 && left < right)
	        right--;

	    if(left < right)
	    {
	        arr[left] = 0;
		arr[right] = 1;
		left++;
		right--;
	    }
	}
}

void display(int arr[], int n)
{
	for(int i=0; i < n; i++)
		printf("%d  ", arr[i]);
	printf("\n");
}

int main()
{
	int arr[] = {0, 0, 1, 0, 1, 0, 0};
	int n = sizeof(arr)/sizeof(arr[0]);

	display(arr, n);

	segregate0and1(arr, n);

	display(arr, n);

	return 0;
}
