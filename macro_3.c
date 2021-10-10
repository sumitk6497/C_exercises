#include <stdio.h>
#define ISEQUAL(X, Y) X == Y

int main()
{
	#if ISEQUAL(X, 0)
		printf("Github\n");
	#else
		printf("C Programming\n");
	#endif

	return 0;
}

/*   OUTPUT

Github		----- X will initialized with 0 so both X and Y is equal

*/
