#include <stdio.h>

int main(int argc,char** arg)
{
	printf("%s\n",arg[argc]);

	return 0;
}

/* OUTPUT

(null)
argc contains the total number of arguments passed through command prompt, 
in this program value of argc will be 3, and the given arguments will store into arg[] from 0 to 2 index.
So arg[argc] => arg[3] will return null. 

*/
