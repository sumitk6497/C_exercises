#include<stdio.h>

int main()
{
	char old_name[] = "git.txt";			//old filename
	char new_name[] = "github.txt";			//new filename
	int value;

	value = rename(old_name, new_name);
	printf("value = %d\n", value);

	if(!value)
	{
		printf("%s", "File name changed successfully\n");
	}
	else
	{
		perror("Error\n");
	}
	return 0;
}

/*
If the file is renamed successfully, zero is returned. On failure, a nonzero value is returned.
*/
