#include <stdio.h>
#include <stdlib.h>

int top = 0;

int fun()
{
	char a[] = {'a','b','c','(','d'};
	return a[top++];
}

int main()
{
	char b[10];
	char ch2;
	int i = 0;

	while(ch2 = fun() != '(')
	{
		b[i++] = ch2;
	}

	printf("%s\n",b);			//3 special characters

	return 0;
}
