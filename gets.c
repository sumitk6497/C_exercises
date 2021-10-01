#include <stdio.h>

#define MAX 15

int main()
{
	char buf[MAX];

	printf("Enter a string: ");
	gets(buf);
	printf("string is: %s\n", buf);

	return 0;
}

/*
It is not safe to use because it does not check the array bound.
It is used to read string from user until newline character not encountered
*/

/*
Suppose we have a character array of 15 characters and input is greater than 15 characters, gets() will read all these characters and store them into variable.Since, gets() do not check the maximum limit of input characters, so at any time compiler may return buffer overflow error.

Since gets() reads input from user, we need to provide input during runtime.
*/
