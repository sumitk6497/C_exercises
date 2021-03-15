#include <stdio.h>

void decToAnyBase(int n, int base)
{
	int i = 0;
	int arr[10];

	for (i = 0; n > 0; i++)
	{
	    arr[i] = n%base;
	    n = n/base;
	}

	printf("Conversion of no. %d in base %d is : ", n, base);
	for(i = i-1; i >= 0; i--)
	    printf("%d", arr[i]);

	printf("\n");
}

int main()
{
	int n, base;
	printf("Enter a decimal no. : ");
	scanf("%d", &n);
	printf("Enter base : ");
	scanf("%d", &base);

	decToAnyBase(n, base);

	return 0;
}
