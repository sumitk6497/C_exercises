#include <stdio.h>

void decToBin(int n)
{
	int bin[10];
	int i;

	for(i = 0; n > 0; i++)
	{
	    bin[i] = n%2;
	    n = n/2;
	}

	printf("Binary no. of %d is : ", n);
	for(i = i-1; i >= 0; i--)
	    printf("%d", bin[i]);

	printf("\n");
}

int main()
{
	int n;
	printf("Enter a decimal no. which you want to convert into binary : ");
	scanf("%d", &n);

	decToBin(n);

	return 0;
}
