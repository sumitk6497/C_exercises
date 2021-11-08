#include <stdio.h>

void fun(int *p)
{
	int q = 10;
	p = &q;
}

int main()
{
	int r = 20;
	int *p = &r;

	fun(p);
	printf("*p = %d   r = %d\n", *p, r);		//20   20

	return 0;
}
