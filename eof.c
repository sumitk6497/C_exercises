#include <stdio.h>

int main()
{
	FILE *fp = fopen("test.txt", "r");
	int ch = getc(fp);

	while (ch != EOF)
	{
		putchar(ch);		// display contents of file on screen

		ch = getc(fp);
	}
	
	if (feof(fp))
		printf("\nEnd of file reached.\n");
	else
		printf("\nSomething went wrong.\n");

	fclose(fp);
	
	return 0;
}

