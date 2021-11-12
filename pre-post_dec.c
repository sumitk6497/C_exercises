#include <stdio.h>

int main()
{
	int a = 1;
	int b = 1;
	int c = a || --b;
	int d = a-- && --b;

	printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);			//0  0  1  0

	return 0;
}
