#include <stdio.h>

int main()
{
	int a,b,c,x,y;
	a = 0x10; 
	b = 10;
	c = 010;

	x = a+b;
	printf("Addition of a:%d and b:%d is= %d\n",a, b, x);		//16,10, 26

	y = a+c;
	printf("Addition of a:%d and c:%d is= %d\n",a, c, y);		//16,8,  24
	
	return 0;
}

