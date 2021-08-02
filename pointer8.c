#include <stdio.h>

int i = 0, j =1;

void f(int *p, int *q)
{
	p = q;
	*p =2;
}

void swapf(int *x, int *y)
{
	static int *temp;
	temp = x;
	x = y;
	y = temp;
}				//Nothing happen

void swapfun(int *x, int *y)
{
	static int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}	


int main()
{
	printf("Original = %d  %d\n",i,j);	//0 1
	f(&i, &j);
	printf("After : %d  %d\n",i,j);		//0 2
	swapf(&i, &j);
	printf("No Swap : %d  %d\n",i,j);	//0 2
	swapfun(&i, &j);
	printf("Swap : %d  %d\n",i,j);		//2 0

	return 0;
}
