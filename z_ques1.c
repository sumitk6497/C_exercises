#include <stdio.h>

int main()
{
	char str[] = "github";

	printf("%s\t",str);			//github
	printf("%c\t",str[4]);			//u
	printf("%s\t","programming");		//programming
	printf("%c\n","programming"[7]);	//m

	char *ptr = "learning";			
	printf("%s\t",ptr);			//learning
	printf("%c\t",ptr[4]);			//n
	printf("%c\n",3[ptr]);			//r


	return 0;
}
