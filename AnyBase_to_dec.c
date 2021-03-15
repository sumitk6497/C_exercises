#include <stdio.h>

void AnyBaseToDec(long long n, int base)
{
	int dec = 0, rem = 0;
	long long temp = n;
	int baseVal = 1;

	while(n != 0)
	{
	    rem = n%10;
	    n = n/10;
	    dec = dec + rem * baseVal;
	    baseVal = baseVal * base;
	}

	printf("Decimal no. of %lld is : %d ", temp, dec);

	printf("\n");
}

int main()
{
	long long n; 
	int base;
	printf("Enter a no. in any base (2-9 base) : ");
	scanf("%lld", &n);
	printf("Enter base : ");
	scanf("%d", &base);

	AnyBaseToDec(n, base);

	return 0;
}
