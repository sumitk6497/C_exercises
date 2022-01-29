#include <stdio.h>

#define LARGEST(x,y)    (x>=y)?x:y

int main()
{
	int a=10, b=20, l=0;

	l = LARGEST(a++,b++);
	
	printf("a = %d, b = %d, largest = %d\n", a, b, l);

	return 0;
}

/* OUTPUT

a=11,b=22,largest=21

Consider the expression
(x>=y)?x:y => will expand with values a++ and b++
(a++ >= b++)? a++ : b++; here (10 >= 20 )?11:21; [largest will be 21..]
Since b++ is executing 2 times so value of b will be 22

*/
