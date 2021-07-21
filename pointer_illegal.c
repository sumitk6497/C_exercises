#include <stdio.h>

int *fun()
{
    int i =10;
    return &i;	//never return address of local variable
}

int main()
{
    int *p =fun();
    printf("%d", *p);
    
    return 0;
}

/* OUTPUT
warning: function returns address of local variable [-Wreturn-local-addr]

*/
