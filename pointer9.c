#include <stdio.h>

int main()
{
	int a[100][100];

	printf("a= %p   a[40][50] = %p\n", a, &a[40][50]);

	//diff between both address is 16200/sizeof(int) = 4050

	/*
	FORMULA : &a[i][j] = BA + (i * NC + j) * c
	where,
	BA = Base Address pf whole 2D array
	NC = No. of columns
	C = Size of data types

	*/

	return 0;
}
