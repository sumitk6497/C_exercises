#include <stdio.h>

void pattern(int n)
{
	int i, j;
	int n0 = 0, n1 = 1;
	int r = n0 + n1;

	for(i = 1; i <= n; i++)
	{
	    for(j = 1; j <= i; j++)
	    {
	        if(i == 1 && j == 1)
		{
		    printf("0");
		    continue;
		}
		printf("%d\t", r);
		r = n0 + n1;
		n0 = n1;
		n1 = r;
	    }
	    printf("\n");
	}
}


int main()
{
	int n;
	printf("Enter a no. : ");
	scanf("%d", &n);

	pattern(n);
	return 0;
}
