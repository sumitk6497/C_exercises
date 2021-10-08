#include <stdio.h>

long fact(int x)
{
	int i;
	long f=1;

	for(i=1; i<=x; i++)
	{
		f=f*i;
	}

	return f;
}

int main()
{
	int i,j,k,n;

	printf("How many lines u want to Print :: ");
	scanf("%d", &n);

	for(i=0; i<n; i++)
	{
	        //loop to print spaces at starting of each row
	 	for(j=1; j<=(n-i-1); j++)
		{
		    printf(" ");
		}

		//loop to calculate each value in a row and print it
		for(k=0; k<=i; k++)
		{
		    printf("%d ",fact(i)/(fact(i-k)*fact(k)));
		}

		printf("\n");    //print new line after each row
	}

	return 0;
}
