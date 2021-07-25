#include <stdio.h>
#define N 2
#define M 3

int main()
{
	int i, j;
	int a[N][M] = {1,2,3,4,5,6};	
	int *p;	

	printf("a = ");
	for(p = &a[0][0]; p <= &a[N-1][M-1]; p++) {
		printf("%d  ", *p);
	}
	printf("\n");

	
	return 0;
}
