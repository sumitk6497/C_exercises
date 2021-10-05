#include <ctype.h>
#include <stdio.h>

int main()
{
	int j = 0;
	char str[] = "GITHUB";

	char ch;

	printf("%s\n", str);

	while (str[j]) 
	{
		ch = str[j];

		// convert ch to lowercase using toLower()
		putchar(tolower(ch));				//github

		j++;
	}
	printf("\n");

	return 0;
}

