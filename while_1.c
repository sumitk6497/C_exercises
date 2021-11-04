#include <stdio.h>

int main()
{
	int i, j, x;
	printf("Enter a no. : ");
	scanf("%d", &x);
	i = 1, j = 1;

	while(i < 10)
	{
		j = j * i;
		i++;
		printf("i = %d  j = %d\n", i, j);

		if(i == x) 
		    break;
	}
	
	return 0;
}

/* OUTPUT

If x = 5;

Enter a no. : 5
i = 2  j = 1
i = 3  j = 2
i = 4  j = 6
i = 5  j = 24

*/
