#include <stdio.h>
#include <string.h>

int main()
{
	char a[] = {'G','I','T','H','U','B'};
	char b[] = "CLONE";
	char c[] = "INIT";
	char d[] = "Learning";

	int l = strlen(a);

	int o = printf("%ld\n", sizeof((sizeof(l) + (c[3]+d[0]+a[1]+b[2]))) );		// 8

	printf("o = %c\n",a[o]);							// T

	return 0;
}
