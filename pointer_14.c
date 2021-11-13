#include <stdio.h>

int main()
{
	char *s[] = {"Github", "clone", "branch"};
	char **p;

	p = s;
	printf("++*p = %s\n", ++*p);			//ithub
	printf("*p++ = %s\n", *p++);			//ithub
	printf("++*p = %s\n", ++*p);			//lone

	return 0;
}
