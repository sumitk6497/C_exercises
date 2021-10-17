#include <stdio.h>

int main()
{
	struct site
	{
		char var[4];					//4
		int num;					//4
		union
		{
		    float x;					
		    long y;
		    int *z;
		};						//8
	};
	struct site ptr;

	printf("Struct Size : %ld\n", sizeof(struct site));	//16

	return 0;
}
