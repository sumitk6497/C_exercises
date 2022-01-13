#include <stdio.h>

int main()
{
	char str[]="value is = %d";
	int a='7';

	str[12]='c';
	printf(str,a);

	printf("\n");
	return 0;
}

/* OUTPUT

value is = 7

We can assign '7' into integer variable a, a will be 55, but str[12]='c' statement will replace 11th character of str 'd' to 'c', 
hence str will be "value is =%c.
and statement printf(str,a); will print "value is = 7".

*/
