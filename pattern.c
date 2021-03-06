#include <stdio.h>


/*********** Pattern 1 *******

*
**
***
****
*****

******************************/
void pattern1(int n)
{
	int i,j;
	for(i=1; i<=n; i++)
	{
	    for(j=1; j<=i; j++)
	    	printf("* ");

	    printf("\n");
	}
}

/*********** Pattern 2 *******

*****
****
***
**
*

******************************/
void pattern2(int n)
{
	int i,j;
	for(i=1; i<=n; i++)
	{
	    for(j=n; j>=i; j--)
	    	printf("* ");

	    printf("\n");
	}
}

/*********** Pattern 3 *******

1
1 2
1 2 3
1 2 3 4
1 2 3 4 5

******************************/
void pattern3(int n)
{
	int i,j;
	for(i=1; i<=n; i++)
	{
	    for(j=1; j<=i; j++)
	    	printf("%d ", j);

	    printf("\n");
	}
}

/*********** Pattern 4 *******

1
2 2
3 3 3
4 4 4 4
5 5 5 5 5

******************************/
void pattern4(int n)
{
	int i,j;
	for(i=1; i<=n; i++)
	{
	    for(j=1; j<=i; j++)
	    	printf("%d ", i);

	    printf("\n");
	}
}

/*********** Pattern 5 *******

1 1 1 1 1
2 2 2 3
3 3 3
4 4
5

******************************/
void pattern5(int n)
{
	int i,j;
	for(i=1; i<=n; i++)
	{
	    for(j=n; j>=i; j--)
	    	printf("%d ", i);

	    printf("\n");
	}
}



int main()
{
	int n;
	printf("Enter a no. : ");
	scanf("%d", &n);

	pattern1(n);
	printf("\n\n");
	pattern2(n);
	printf("\n\n");
	pattern3(n);
	printf("\n\n");
	pattern4(n);
	printf("\n\n");
	pattern5(n);
	printf("\n\n");

	return 0;
}
