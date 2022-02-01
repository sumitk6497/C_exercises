#include <stdio.h>
 
int fun()
{
	static int num = 0;
	num++;

	return num;
}

int main()
{
	int val;

	val = fun();
	printf("step1: %d\n",val);

	val=fun();
	printf("step2: %d\n",val);

	val=fun();
	printf("step3: %d\n",val);

	return 0;
}

/* OUTPUT

step1: 1
step2: 2
step3: 3


The life time of a static variable is the entire program i.e. when we call fun() again num will not declare again.

*/
