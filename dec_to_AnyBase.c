#include <stdio.h>

void decToAnyBase(int n, int base)
{
	int r = 0, res = 0;
	int i = 0;

	r = n%base;
	i = n/base;
	res = (i*10) + r;

	printf("Conversion of no. %d in base %d is : %d\n", n, base, res);
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
