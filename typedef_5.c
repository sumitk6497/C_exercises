#include <stdio.h>

int main()
{
	typedef struct
	{
		int  empid;
		int  bsal;
	}EMP;

	EMP E = {10012,15100};
	printf("%d, %d\n",E.empid,E.bsal);		//10012,  15100

	return 0;
}
