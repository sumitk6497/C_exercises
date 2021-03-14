#include <stdio.h>

int main()
{
    int num, count = 0;
    printf("Enter a no. : ");
    scanf("%d",&num);

    while(num > 0)
    {
        num = num/10;
	count++;
    }
    printf("Total digits in given no. is : %d\n", count);
    return 0;
}
