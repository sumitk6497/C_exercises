#include <stdio.h>

int main()
{
	union values
	{
	    int  intVal;
	    char chrVal[2];
	};
 
	union values val;

	val.chrVal[0]='A';
	val.chrVal[1]='B';
 
	printf("chrVal[0] = %c, chrVal[1] = %c, intVal = %d\n",val.chrVal[0], val.chrVal[1], val.intVal);

	return 0;
}

/* OUTPUT

A,B,16961

Only 2 bytes will be occupied for this union variable val.
Data will store in memory like this :

-----intVal------
01000010   01000001
chrVal[1]  chrval[0]

So the value of intVal is 01000010 01000001 is equivalent to 16961.

*/
