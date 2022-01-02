#include <stdio.h>

int main()
{
	int a=16,n=0;

	while(n<=~(~a))
	{
		n++;
	}
	
	a=n;
	
	printf("%d\n",~a);
	return 0;
}

/* OUTPUT

-18

While loop termination condition decides by unary operation performs on variable ‘a’. To find out Bitwise compliment
	N`= -(n+1)
	i.e. n`= -(-(16+1)+1) = -(-17+1) = -(-16) = 16.

*/
