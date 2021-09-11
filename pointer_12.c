#include <stdio.h>

#define N 22

int main()
{    
    const char *ptr = "Github coding per day"; 
 
    for (int i = 0; i < N; i++)
    {
        printf("%s\n", ptr);;
 
        ptr++;
    }

    return 0;
}
