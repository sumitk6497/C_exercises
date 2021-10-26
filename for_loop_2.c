#include <stdio.h>

int main()
{
	int i = 0;

	for(printf("1st\n"); i < 2 && printf("2nd\n"); ++i && printf("3rd\n\n"))
		printf("Github\n");

	return 0;
}

/* OUTPUT

1st
2nd
Github  
3rd

2nd
Github  
3rd


*/
