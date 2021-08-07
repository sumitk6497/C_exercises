#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *b = (int *)calloc(5, sizeof(int));			//allocalte memory for 5 interger and initialised with 0
	if(b == NULL)
	{
		printf("Failed to allocate memory....!!!");
		return 0;
	}

	for (int i = 0; i < 5; i++) 
		printf("%d  ",b[i]);				//0 0 0 0 0
	printf("\n");

	for (int i = 0; i < 5; i++) 
		b[i] = i;
	
	for (int i = 0; i < 5; i++) 
		printf("%d  ",b[i]);				//0 1 2 3 4
	printf("\n");	


	b = realloc(b, sizeof(int)*3);

	free(b);				
	b = NULL;

	return 0;
}
