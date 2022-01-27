#include <stdio.h>

int main()
{
	#ifdef debug
	    printf("Start debugging...\n");
	#endif
	    printf("GitHub Code\n");

	return 0;
}

/* OUTPUT

GitHub Code

debug macro is not define

*/
