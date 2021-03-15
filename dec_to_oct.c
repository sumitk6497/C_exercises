#include <stdio.h>

void decToOct(int n)
{
	int i;
	int arr[10];

	for (i = 0; n > 0; i++)
	{
	    arr[i] = n%8;
	    n = n/8;
	}

	printf("Conversion of no. %d in Octal is : ", n);
	for(i = i-1; i >= 0; i--)
	    printf("%d", arr[i]);

	printf("\n");
}

int main()
{
	int n;
	printf("Enter a decimal no. which you want to convert into octal : ");
	scanf("%d", &n);

	decToOct(n);

	return 0;
}
