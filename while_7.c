#include <stdio.h>

int main()
{
	int n=0, a=5, b=10;

	while(n<=(b<<a))
	{
		n++;
	}

	printf("%d\n",n);

	return 0;
}

/* OUTPUT

321


While loop termination condition is set by performing left shift operation on b upto a.

    Decimal              Binary
A	5		00000101
B	10		00001010

Therefore,
		B <<A
		10<<5 = 0000101000000 =320(decimal)

*/
