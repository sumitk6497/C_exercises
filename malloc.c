#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *a = (int *)malloc(sizeof(int));			//allocate memory with int size
	if(a == NULL)						
	{
		printf("Failed to allocate memory....!!!");
		return 0;
	}

	*a = 5;							//initialization
	printf("%d   %p\n",*a, a);				//print value and address	5  0xaddress
	free(a);						//de-allocate memory
	a = NULL;						//assign with NULL pointer


	int *b = (int *)malloc(5*sizeof(int));			//allocalte memory for 5 interger
	if(b == NULL)
	{
		printf("Failed to allocate memory....!!!");
		return 0;
	}

	for (int i = 0; i < 5; i++) 
		b[i] = i;
	
	for (int i = 0; i < 5; i++) 
		printf("%d  ",b[i]);

	printf("\n");	
	free(b);
	b = NULL;

	return 0;
}
