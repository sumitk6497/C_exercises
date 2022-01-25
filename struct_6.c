#include <stdio.h>

int main()
{
	struct std
	{
	    char name[30];
	    int age;
	};

	struct std s1 = {"Mike",26};
	struct std s2 = s1;

	printf("s1 -- Name: %s, Age: %d\n",s1.name,s1.age);
	printf("s2 -- Name: %s, Age: %d\n",s2.name,s2.age);

	return 0;
}

/* OUTPUT

s1 -- Name: Mike, Age: 26
s2 -- Name: Mike, Age: 26

A structure variable can be assigned like this struct std s2=s1; if structure variables are same.

*/
