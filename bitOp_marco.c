#include <stdio.h>

#define bitset(byte, nbit) ((byte) |= (1<<(nbit)))
#define bitclear(byte, nbit) ((byte) &= ~(1<<(nbit)))
#define bitflip(byte, nbit) ((byte) ^= (1<<(nbit)))
#define bitcheck(byte, nbit) ((byte) & (1<<(nbit)))


int main()
{
	int byte;
	int nbit;

	printf("Enter a no. : ");
	scanf("%d", &byte);
	printf("Enter bit that you want to bit-operation : ");
	scanf("%d", &nbit);
	printf("No. after bit manupalation : %d\n", byte);

	printf("No. after bit set : %d\n", bitset(byte, nbit);
	printf("No. after bit clear : %d\n", bitclear(byte, nbit));
	printf("No. after bit flip : %d\n", bitflip(byte, nbit));
	bitcheck(byte, nbit) ? printf("Bit is SET.\n") : printf("Bit is not SET\n");

	return 0;
}
