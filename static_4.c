#include <stdio.h>

int a, b, c = 0;
void prtFun();

int main()
{
	static int a = 1;
	prtFun();

	a += 1;
	prtFun();

	printf("Main : a = %d  b = %d\n",a, b);

	return 0;
}

void prtFun()
{
	static int a = 2;
	int b = 1;

	a += ++b;
	printf("Fun : a = %d  b = %d\n",a, b);

}

/* OUTPUT

Fun : 4  2
Fun : 6  2
Main: 2  0

*/
