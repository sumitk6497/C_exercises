#include <stdio.h>

int main()
{
	float a=125.50;
	int b=125.50;
	char c='A';
 
	printf("%ld, %ld, %ld\n",sizeof(a),sizeof(b),sizeof(125.50));		//4  4  8
	printf("%ld, %ld\n",sizeof(c),sizeof(65));				//1  4

	return 0;
}
