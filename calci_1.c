#include <stdio.h>

int main()
{
	int a, b, result;
	int choice = -1;
	printf("Enter two no. : ");
	scanf("%d %d", &a, &b);

	printf("\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Modulous\n");
	scanf("%d", &choice);

	switch(choice)
	{
	    case 1:
		result = a + b;
		printf("\nAdition of %d & %d = %d\n", a, b, result);
		break;
	    case 2:
		result = a - b;
		printf("\nSubtraction of %d & %d = %d\n", a, b, result);
		break;
	    case 3:
		result = a * b;
		printf("\nMultiplication of %d & %d = %d\n", a, b, result);
		break;
	    case 4:
		result = a / b;
		printf("\nDivision of %d & %d = %d\n", a, b, result);
		break;
	    case 5:
		result = a % b;
		printf("\nModulous of %d & %d = %d\n", a, b, result);
		break;
	    default:
		printf("Invalid choice...!!!!\n");

	}

	return 0;
}
