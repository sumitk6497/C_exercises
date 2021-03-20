#include <stdio.h>

int fact_ite(int n);
int fact_rec(int n);

//Iterative Method
int fact_ite(int n)
{
	int i, f = 1;

	for(i = 1; i <= n; i++)
	    f = f*i;

	return f;
}

//Recursive Method
int fact_rec(int n)
{
	if(n == 0)
	    return 1;
	else
	    return (n * fact_rec(n-1));
}

int main()
{
	int num;
	printf("Enter a number : ");
	scanf("%d",&num);

	int fact1 = fact_ite(num);
	int fact2 = fact_rec(num);

	printf("Factorial No. of %d using iterative method is = %d\n", num, fact1);
	printf("Factorial No. of %d using recursive method is = %d\n", num, fact2);

	return 0;
}
