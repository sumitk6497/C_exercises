#include <stdio.h>

int main()
{
	int i, j;
	int sum;
	int a[5][5] = {
	               {2,5,11,4,6},	
	               {12,1,0,3,6},	
	               {2,8,11,4,9},	
	               {4,5,10,4,0},	
	               {3,15,17,4,4},
		      };

	printf("Sum of rows = ");
	for(i=0; i < 5; i++) {
	    sum = 0;
	    for(j = 0; j < 5; j++)
		sum += a[i][j];

	    printf("%d  ", sum);
	}
	printf("\n");

	printf("Sum of columns = ");
	for(j=0; j < 5; j++) {
	    sum = 0;
	    for(i = 0; i < 5; i++)
		sum += a[i][j];

	    printf("%d  ", sum);
	}
	printf("\n");
	
	
	return 0;
}
