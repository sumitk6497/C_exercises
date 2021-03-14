#include <stdio.h>

int main()
{
    int num, sum = 0, rem = 0;

    printf("Enter a no. : ");
    scanf("%d",&num);

    while(num > 0)
    {	
    	rem = num%10;
        num = num/10;
	sum = sum + rem;
    }
    printf("Sum of digits in given no. is : %d\n", sum);
    return 0;
}
