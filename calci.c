#include <stdio.h>

int main()
{
	int a, b, result;
	int choice = -1;
	printf("Enter two no. : ");
	scanf("%d %d", &a, &b);

	printf("\n1. Addition\n2. Multiplication\n");
	scanf("%d", &choice);

	if(choice == 1)
	{
		result = a + b;
		printf("\nAddition of %d & %d = %d\n", a, b, result);
	}
	else if(choice == 2)
	{
		result = a * b;
		printf("\nMultiplication of %d & %d = %d\n", a, b, result);
	}
	else
		printf("Invalid choice...!!!!\n");

	return 0;
}
