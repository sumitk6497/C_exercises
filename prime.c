#include <stdio.h>

int main()
{
    int num,i;
    printf("Enter a no. between 1 to 300 : ");
    scanf("%d",&num);

    if(1<=num && num<=300)
    {
        i=2;
        while(i <= num-1)
        {
            if(num%i == 0)
            {
                printf("Entered no. is not Prime Number...!!!!\n");
                break;
            }
            i++;
        }

        if(i == num)
            printf("Entered no. is a Prime Number....!!!!\n");
    }
    else
        printf("Invalid No., Enter no. between 1 to 300.....!!!!\n");
    return 0;
}
