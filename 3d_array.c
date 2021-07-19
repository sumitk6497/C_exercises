#include <stdio.h>

int main()
{
	int i, j, k;
	int a[2][2][3] = {1,2,3,4,5,6,7,8,9,10,11,12};	
	int b[2][2][3] = {
			  {{4,5,6},{1,2,3}},
			  {{7,8,9},{10,11,12}}
			 };
	
	int c[2][2][3];

	printf("a = ");
	for(i=0; i < 2; i++) {
	    for(j = 0; j < 2; j++) {
	        for(k = 0; k < 3; k++)
		    printf("%d  ", a[i][j][k]);
	    }
	}
	printf("\n");

	printf("b = ");
	for(i=0; i < 2; i++) {
	    for(j = 0; j < 2; j++) {
	        for(k = 0; k < 3; k++)
		    printf("%d  ", b[i][j][k]);
	    }
	}
	printf("\n");
	
	printf("Enter elements for C array : \n");
	for(i=0; i < 2; i++) {
	    for(j = 0; j < 2; j++) {
	        for(k = 0; k < 3; k++)
		    scanf("%d", &c[i][j][k]);
	    }
	}
	printf("\n");

	printf("c = ");
	for(i=0; i < 2; i++) {
	    for(j = 0; j < 2; j++) {
	        for(k = 0; k < 3; k++)
		    printf("%d  ", c[i][j][k]);
	    }
	}
	printf("\n");
	
	return 0;
}
