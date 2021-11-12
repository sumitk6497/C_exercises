#include <stdio.h>

int f1()
{
	printf("Git");
	return 1;
}

int f2()
{
	printf("Hub");
	return 1;
}

int main()
{
	int p = f1() + f2();
	printf("  %d\n", p);

	return 0;
}

/* OUTPUT : GitHub  2 */
