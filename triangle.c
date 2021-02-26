#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("Enter three angle : ");
    scanf("%d %d %d",&a,&b,&c);

    if(a+b+c==180)
        printf("Triangle is valid....!!!!\n");
    else
        printf("Triangle is invalid....!!!!\n");

    return 0;
}
