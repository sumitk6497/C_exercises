#include <stdio.h>

int main()
{
	char *str    []={"AAAAA","BBBBB","CCCCC","DDDDD"};
	char **sptr  []={str+3,str+2,str+1,str};
	char ***pp;

	pp=sptr;
	++pp;
	printf("%s\n",**++pp+2);

	return 0;
}

/* OUTPUT

BBB

*str is a array pointer of string, **sptr is array pointer(double pointer) that is pointing to str strings in reverse order. 
***pp also a pointer that is pointing sptr base address.
++pp will point to 1st index of sptr that contain str+2 ("CCCCC").
in printf("%s",**++pp+2); ++pp will point to str+1, and **++pp, value stored @ str+1 ("BBBBB).
and (**++pp)+2 will point the 2nd index of "BBBBB", hence BBB will print. 

*/
