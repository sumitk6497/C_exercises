#include <stdio.h>

int main()
{
	static int array[] = {10,20,30,40,50};

	printf("%d...%d\n", *array, *(array+3) * *array);

	return 0;
}

/* OUTPUT

10...400

In expression printf("%d...%d",*array,*(array+3)* *array);, *array is 10, *(array+3) is 40. 

*/
