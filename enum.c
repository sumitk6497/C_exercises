#include <stdio.h>

enum day {sunday = 1, tuesday, wednesday, thursday, friday, saturday};

int main()
{
	enum day d = thursday;
	printf("The day number stored in d is %d\n", d);

	return 0;
}

