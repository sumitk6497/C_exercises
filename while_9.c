#include <stdio.h>

int main()
{
	char *str = "GitHub";

	while(*str)
		printf("%s\n",str++);

	return 0;
}

/* OUTPUT

GitHub
itHub
tHub
Hub
ub
b

*/
