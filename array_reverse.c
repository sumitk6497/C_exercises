//WAP in C to reverse array elements

#include <stdio.h>
#define N 10

int main()
{
	int a[N] = {21,5,17,8,64,99,2,10,6,30};		
	int i;
	int j = N - 1;

	printf("Original array = ");
	for(i=0; i < N; i++)
		printf("%d  ", a[i]);

	printf("\n");

	for(i = 0; i <= N/2; i++)
	{
		int temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		j--;
	}

	printf("Reverse array = ");
	for(i=0; i < N; i++)
		printf("%d  ", a[i]);
	printf("\n");
	
	
	return 0;
}
