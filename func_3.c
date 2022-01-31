#include <stdio.h>

char* fun1(void)
{
	char str[] = "Hello";
	return str;
}
 
char* fun2(void)
{
	char *str = "Hello";
	return str;
}

int main()
{
	printf("%s, %s\n",fun1(),fun2());

	return 0;
}

/* OUTPUT

Garbage,Hello


fun1() suffers from the dangling pointer, The space for "Hello" is created dynamically as the fun1() is called, 
and is also deleted on the exiting of the function fun1(), so that data is not available in calling function (main()).

*/
