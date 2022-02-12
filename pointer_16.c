#include <stdio.h>

int main()
{
	char *str = "GitHub";

	printf("%c\n", *&*str);
	printf("%s\n", str);

	return 0;
}

/* OUTPUT

G
GitHub

& is a reference operator, * is de-reference operator, 
We can use these operators any number of times. str points the first character of GitHub, 
*str points "G", * & again reference and de-reference the value of str.

*/
