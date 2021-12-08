#include <stdio.h>
 
int main()
{
	int x = 65;
	printf("x = %d\n",x);			//65
	
	const unsigned char c=(int)x;
	printf("x = %c\n",c);			//A
 
	return 0;
}

