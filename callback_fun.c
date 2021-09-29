#include<stdio.h>

void A()
{
	printf("I am function A\n");
}


void B(void (*ptr)())			//callback function
{
	(*ptr) (); 			//callback to A
}

int main()
{
	void (*ptr)() = &A;
	
	B(ptr);				// calling function B and passing address of the function A as argument

	return 0;
}

