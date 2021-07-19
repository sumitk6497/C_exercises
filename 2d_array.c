#include <stdio.h>
#define N 2
#define M 3

int main()
{
	int i, j;
	int a[N][M] = {1,2,3,4,5,6};	
	int b[N][M] = {{5,6,7},{1,2,3,}};
	
	int c[N][M];

	printf("a = ");
	for(i=0; i < N; i++) {
	    for(j = 0; j < M; j++)
		printf("%d  ", a[i][j]);
	}
	printf("\n");

	printf("b = ");
	for(i=0; i < N; i++) {
	    for(j = 0; j < M; j++)
		printf("%d  ", b[i][j]);
	}
	printf("\n");
	
	printf("Enter elements for C array : \n");
	for(i=0; i < N; i++) {
	    for(j = 0; j < M; j++)
		scanf("%d", &c[i][j]);
	}
	printf("\n");

	printf("c = ");
	for(i=0; i < N; i++) {
	    for(j = 0; j < M; j++)
		printf("%d  ", c[i][j]);
	}
	printf("\n");
	
	return 0;
}
