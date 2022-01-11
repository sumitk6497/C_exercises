#include <stdio.h>

int main()
{
	char str[] = "GitHub%s%dRepositories";

	printf(str);
	printf("\n");
	printf("%s\n",str);

	return 0;
}

/* OUTPUT

GitHub(null)<GarbageValue>Repositories
GitHub%s%dRepositories
printf("%s",str); prints all string, but printf(str) prints the value instead of %s, %d .. etc (default value for %s is null and %d is 0.

*/
