#include <stdio.h>

int main()
{
	float a = 10.5;
 
	printf("===FIRST CONDITION\n");
	if(sizeof(a)==sizeof(10.5))
		printf("Matched !!!");
	else
		printf("Not matched !!!");
 
	printf("\n===SECOND CONDITION\n");
	if(sizeof(a)==sizeof(10.5f))
		printf("Matched !!!");
	else
		printf("Not matched !!!");
 
	printf("\n===THIRD CONDITION\n");
	if(sizeof((double)a)==sizeof(10.5))
		printf("Matched !!!");
	else
		printf("Not matched !!!");
 
	printf("\n===FOURTH CONDITION\n");
	if(a==10.5f)
		printf("Matched !!!");
	else
		printf("Not matched !!!");
 
	printf("\n");

	return 0;
}

/* OUTPUT

==FIRST CONDITION
Not matched !!!
===SECOND CONDITION
Matched !!!
===THIRD CONDITION
Matched !!!
===FOURTH CONDITION
Matched !!!

*/
