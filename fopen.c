#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp = fopen("test.txt", "w");
	
	//FILE *fp = fopen("test.txt", "wx");		//When x is used with w, fopen() returns NULL if file already exists or could not open. 

	if (fp == NULL)
	{
		puts("Couldn't open file\n");
		exit(0);
	}
	else
	{
		fputs("GeeksforGeeks", fp);
		puts("Done");
		fclose(fp);
	}

	return 0;
}

