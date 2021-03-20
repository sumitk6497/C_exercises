#include <stdio.h>

int main()
{
	int num, i = 2;
	int flag = 0;
	printf("Enter a no. between 1 to 3000 : ");
	scanf("%d",&num);

	if(1<=num && num<=3000)
	{
	    for(i = 2; i <= num/2; ++i)
	    {
	        if(num%i == 0)
		{
		    printf("Entered no. is not Prime Number...!!!!\n");
		    flag = 1;
		    break;
		}
	    }

	if(flag == 0)
	    printf("Entered no. is a Prime Number....!!!!\n");

	}
	else
	    printf("Invalid No., Enter no. between 1 to 3000.....!!!!\n");

	    
	return 0;
}
