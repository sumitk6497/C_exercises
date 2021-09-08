#include <stdio.h>

//int main(void)		//ERROR :can't pass arguments
int main()
{
	static int i = 5;
	if(--i)
	{
	    printf("%d\n",i);
	    main(10);
	}

	return 0;
}
