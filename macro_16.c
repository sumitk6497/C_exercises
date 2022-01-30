#include <stdio.h>
 
#define SUM(x,y)    int s; s=x+y; printf("sum = %d\n",s);

int main()
{
	SUM(10,20);
//	SUM(10,20);		// ERROR

	return 0;
}

/* OUTPUT

sum = 30

Here SUM(10,20) will be expanded as int s; s=10+20; printf("sum=%d",s);
Hence sum=30 will print.
In same example, if you call SUM() again, you will get an error 's' redefinition.

*/
