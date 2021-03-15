#include <stdio.h>
#include <math.h>

void binToDec(long long n)
{
	int dec = 0, rem = 0;
	long long temp = n;
	int base = 1;

	while(n != 0)
	{
	    rem = n%10;
	    n = n/10;
	    dec = dec + rem * base;
	    base = base * 2;
	}

	printf("Decimal no. of %lld is : %d ", temp, dec);

	printf("\n");
}

int main()
{
	long long n;
	printf("Enter a binary no. which you want to convert into decimal : ");
	scanf("%lld", &n);

	binToDec(n);

	return 0;
}
