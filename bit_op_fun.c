#include <stdio.h>

void bitset(int byte, int nbit) 
{
	byte = byte | (1<<(nbit));
	printf("No. after bit set : %d\n", byte);
}
	
void bitclear(int byte, int nbit)
{
	byte = byte & ~(1<<(nbit));
	printf("No. after bit clear : %d\n", byte);
}

void bitflip(int byte, int nbit) 
{
	byte = byte ^ (1<<(nbit));
	printf("No. after bit flip : %d\n", byte);
}

void bitcheck(int byte, int nbit) 
{
	if((byte) & (1<<(nbit)))
	    printf("%dth bit is SET.\n", nbit);
	else
	    printf("%dth bit is not SET.\n", nbit);
}


int main()
{
	int byte;
	int nbit;

	printf("Enter a no. : ");
	scanf("%d", &byte);
	printf("Enter bit that you want to bit-operation : ");
	scanf("%d", &nbit);
	printf("No. after bit manupalation : %d\n", byte);

	bitset(byte, nbit);
	bitclear(byte, nbit);
	bitflip(byte, nbit);
	bitcheck(byte, nbit);

	return 0;
}
