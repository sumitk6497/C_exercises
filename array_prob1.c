//WAP in C to display array in reverse order

#include <stdio.h>
#define N 10

int main()
{
	int a[N] = {21,5,17,8,64,99,2,10,6,30};		
	int i;

	printf("Original array = ");
	for(i=0; i < N; i++)
		printf("%d  ", a[i]);

	printf("\n");

	printf("Reverse array = ");
	for(i = N-1; i >= 0; i--)
		printf("%d  ", a[i]);
	printf("\n");
	
	
	return 0;
}
