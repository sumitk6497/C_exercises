#include <stdio.h>

int main()
{
	int arri[] = {1,2,3};
	char arrc[] = {'a','b','c'};

	int *ptri = arri;
	char *ptrc = arrc;

	printf("sizeof(arri) = %ld\n",sizeof(arri));		//12
	printf("sizeof(ptri) = %ld\n",sizeof(ptri));		//8
	printf("sizeof(arrc) = %ld\n",sizeof(arrc));		//3
	printf("sizeof(ptrc) = %ld\n",sizeof(ptrc));		//8

	return 0;
}
