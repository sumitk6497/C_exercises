#include <stdio.h>

#define MOBILE  0x01
#define LAPTOP  0x02

int main()
{
	unsigned char item=0x00;

	item |= MOBILE;
	printf("item |= MOBILE : %x\n", item);			//1

	item |= LAPTOP;
	printf("item |= LAPTOP : %x\n", item);			//3

	printf("I have purchased :");
	if(item & MOBILE){
		printf("Mobile, ");
	}

	if(item & LAPTOP){
		printf("Laptop");
	}

	printf("\n");

	return 0;
}

/* OUTPUT

I have purchased : Mobile, Laptop
*/
