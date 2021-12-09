#include <stdio.h>
 
int main()
{
	int x = 2.3;
	const char c1 = (float)x;
	const char c2 = (int)x;
     
	printf("float = %d, int = %d\n", c1, c2);
 
	return 0;
}

/* OUTPUT

2  2
const char can't be assigned to float casted value, thus assigning rounding of integer value.

*/

