#include <stdio.h>

#define MAX 15

int main()
{
	char buf[MAX];
	
	printf("Enter input string : ");

	fgets(buf, MAX, stdin);
	printf("string is: %s\n", buf);

	return 0;
}

/*
    It follow some parameter such as Maximum length, buffer, input device reference.
    It is safe to use because it checks the array bound.
    It keep on reading until new line character encountered or maximum limit of character array.
*/

/*
Example : Let’s say the maximum number of characters are 15 and input length is greater than 15 but still fgets() will read only 15 character and print it.

Since fgets() reads input from user, we need to provide input during runtime.
*/
