#include <stdio.h>

#define macro(n,a,i,m) m##a##i##n
#define MAIN macro(n,a,i,m)

int MAIN()
{
	printf("Github\n");
	
	return 0;
}

/* OUTPUT

Github

*/
