#include <stdio.h>

int main()
{
	int a[5] = {1,2,3,4,5}, b[5] = {10,20,30,40,50};
	int i;

	for(i = 0; i < 5; i++)
		*(a + i) =*(i + a) + *(b + i);

	for(i = 0; i < 5; i++)
		printf("%d ", *(a + i));

	printf("\n");
	return 0;
}

/* OUTPUT

11 22 33 44 55

*(i + a) Or *(b + i) Or a[i], so here we are adding two arrays

*/
