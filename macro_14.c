#include <stdio.h>

#define FUN(x)  x*x

int main()
{
	int val = 0;

	val = 128/FUN(8);
	printf("val = %d\n",val);

	return 0;
}

/* OUTPUT

128


Consider the expression...
val=128/FUN(8) => will expand val=128/8*8
According to the operator associativity "/" will evaluate first so expression will be val=(128/8)*8=>128

*/
