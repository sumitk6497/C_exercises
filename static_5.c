#include <stdio.h>

void inc();
void incy();

int main()
{
	inc();inc(); inc();			//1  2  3

	incy();incy(); incy();			//0  1  2

	return 0;
}

void inc()
{
	static int x;
	printf("%d\n", ++x);
}

void incy()
{
	static int y;
	printf("%d\n", y++);
}
