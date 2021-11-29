#include <stdio.h>

int main()
{   
	const char var='A';
	const int a = 10;
	
//	++a;				//ERROR : increment of read-only variable ‘a’
//	++var;				//ERROR : increment of read-only variable ‘var’

	printf("%c\n",var);		//A
	printf("%d\n",a);		//10

	return 0;
}

