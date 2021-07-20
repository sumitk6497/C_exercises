#include <stdio.h>
#define N 10

int main()
{
	int i, j =0;
	int a[N] = {5,6,7,1,2,3,4};
	int in, val;

	printf("Enter the index no. : ");
	scanf("%d",&in);
	printf("Enter the value : ");
	scanf("%d",&val);

	for(int i=0; i < N; i++)
		printf("%d  ", a[i]);
	printf("\n");

	int temp = 0;
	for(i = N - 1; i >= in - 1; i--) {
	       a[i] = a[i-1];

	}
	a[in-1] = val;
	
	for(i=0; i < N; i++)
		printf("%d  ", a[i]);
	printf("\n");

	return 0;
}
