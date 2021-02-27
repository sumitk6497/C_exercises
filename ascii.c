#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    for(i=0;i<=255;i++)
    {
        printf("%d\t",i);
        printf("%c",i);
        printf("\n");
    }
    return 0;
}

/*
int main()
{
    int ch=0;
    while(ch<=255)
    {
        printf("%d  %c\n",ch,ch);
        ch++;
    }
    return 0;
}
*/
