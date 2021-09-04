#include <stdio.h>

enum day {sunday = 10, tuesday, wednesday = 5, thursday, friday, saturday};

int main()
{
	enum day d1 = thursday;
	enum day d2 = tuesday;
	printf("Thursday = %d\n", d1);
	printf("Tuesday = %d\n", d2);

	return 0;
}

