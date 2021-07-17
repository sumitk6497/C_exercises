#include <stdio.h>
#define N 10

int main()
{
	int a[N] = {0};			//initialised all value with 0
	int b[N] = {5,6,7,1,2,3,4};	//rest elements will initialised with 0
	int c[] = {1,2,3,4};
	int d[N];

	for(int i=0; i < N; i++)
		printf("%d  ", a[i]);
	printf("\n");

	for(int i=0; i < N; i++)
		printf("%d  ", b[i]);
	printf("\n");
	
	for(int i=0; i < N; i++)
		printf("%d  ", c[i]);
	printf("\n");

	printf("Enter elements for D array : ");
	for(int i=0; i < N; i++)
		scanf("%d  ", &d[i]);
	printf("\n");

	for(int i=0; i < N; i++)
		printf("%d  ", d[i]);
	printf("\n");
	
	return 0;
}
