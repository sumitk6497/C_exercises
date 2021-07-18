#include <stdio.h>
#define N 10

int main()
{
	int a[N] = {[0] = 1, [5] = 2, [6] = 3};		//designated initialization
	int b[N] = {[0] = 5, [4] = 9};
	int c[N] = {[4] = 9, [0] = 5};		//array b[] and c[] are same
	//int d[N] = {[11] = 9, [0] = 5};		//will get error bcz designator value is greater than size of error
	int e[] = {[6] = 19, [3] = 5};		//size of array will be equal to highest value of designator
	int f[N] = {1, 4, 7, [4] = 9, 10, [8] = 5};		//{1,4,7,0,9,10,0,0,5,0}
	int g[N] = {1, 4, 7, [2] = 9, 10, [8] = 5};		//{1,4,9,0,0,10,0,0,5,0}, designator will take place

	printf("a = ");
	for(int i=0; i < N; i++)
		printf("%d  ", a[i]);
	printf("\n");

	printf("b = ");
	for(int i=0; i < N; i++)
		printf("%d  ", b[i]);
	printf("\n");
	
	printf("c = ");
	for(int i=0; i < N; i++)
		printf("%d  ", c[i]);
	printf("\n");

	printf("e = ");
	int e_size = sizeof(e)/sizeof(int);
	for(int i=0; i < e_size; i++)
		printf("%d  ", e[i]);
	printf("\n");
	
	printf("f = ");
	for(int i=0; i < N; i++)
		printf("%d  ", f[i]);
	printf("\n");

	printf("g = ");
	for(int i=0; i < N; i++)
		printf("%d  ", g[i]);
	printf("\n");

	return 0;
}
