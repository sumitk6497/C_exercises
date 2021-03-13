#include <stdio.h>

void decToOct(int n)
{
	int oct, r;
	int i;

	r = n%8;
	i = n/8;
	oct = (i*10) + r;

	printf("Octal no. of %d is : %d\n", n, oct);
}

int main()
{
	int n;
	printf("Enter a decimal no. which you want to convert into octal : ");
	scanf("%d", &n);

	decToOct(n);

	return 0;
}
