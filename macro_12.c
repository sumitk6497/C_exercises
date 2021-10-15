#include <stdio.h>

#define SQR(x) (x*x)

int main()
{
	int a;
	int b = 4;

	a = SQR(b+2);
	printf("%d\n", a);

	return 0;
}

/*  OUTPUT = 14

a = SQR(b+2)
a = b+2*b+2
a = 4+2*4+2
a = 4+8+2
a = 14

*/
