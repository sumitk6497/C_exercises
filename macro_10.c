#include <stdio.h>

#define get(s) #s

int main()
{
	char str[] = get(Github);
	printf("%s\n", str);			//Github

	return 0;
}
