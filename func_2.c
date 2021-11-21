#include <stdio.h>

void fun()
{
	printf("GitHub  ");
}

void func()
{
	printf("Platform");
}

int main()
{
	fun(), func();			//GitHub  Platform
	printf("\n");

	return 0;
}
