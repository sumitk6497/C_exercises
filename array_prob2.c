//WAP in C to check entered num has repeated digits of not

#include <stdio.h>
#define N 10

int main()
{
	int num;
	int rem = 0, i = 0;
	int seen[N] = {0};

	printf("Enter a num : ");
	scanf("%d", &num);

	while(num > 0)
	{
		rem = num%10;
		if(seen[rem] == 1)
			break;

		seen[rem] = 1;
		num = num/10;
	}

	if(num > 0)
		printf("Entered no. has repeated digits.");
	else
		printf("Entered no. has not repeated digits.");

	printf("\n");
	
	return 0;
}
