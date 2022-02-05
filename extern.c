#include <stdio.h>

int main()
{
	extern int i;
	printf("%d\n", i);

	{
		i = 10;
		printf("%d\n", i);
	}

	return 0;
}

/* OUTPUT

Error

/usr/bin/ld: /tmp/ccBWBX6L.o: in function `main':
extern.c:(.text+0xa): undefined reference to `i'
/usr/bin/ld: extern.c:(.text+0x23): undefined reference to `i'
/usr/bin/ld: extern.c:(.text+0x2d): undefined reference to `i'
collect2: error: ld returned 1 exit status

*/
