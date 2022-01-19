#include <stdio.h>

struct sample
{
    int a     = 0;
    char b    = 'A';
    float c   = 10.5;
};

int main()
{
	struct sample s;
	printf("%d, %c, %f\n", s.a, s.b, s.c);

	return 0;
}

/* OUTPUT

Error: Can not initialize members here
We can only declare members inside the structure, initialization of member with declaration is not allowed in structure declaration. 

*/

