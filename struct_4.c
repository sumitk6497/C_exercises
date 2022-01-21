#include <stdio.h>

struct employee
{
	int empId;
	char *name;
	int age;
};

int main()
{
	struct employee emp[] = { {1,"Mike",24}, {2,"AAA",24}, {3,"BBB",25}, {4,"CCC",30} };
 
	printf("Id : %d, Age : %d, Name : %s\n", emp[2].empId,3[emp].age,(*(emp+1)).name);

	return 0;
}

/* OUTPUT

Id : 3, Age : 30, Name : AAA

*/
