#include <stdio.h>

#define MAX 100

int main()
{
	int MAX = 1000;
	printf("%d\n", MAX);		//compiler error

	return 0;
}

/*
macro_8.c: In function ‘main’:
macro_8.c:3:13: error: expected identifier or ‘(’ before numeric constant
    3 | #define MAX 100
      |             ^~~
macro_8.c:7:6: note: in expansion of macro ‘MAX’
    7 |  int MAX = 1000;
      |      ^~~
*/
