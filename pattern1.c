#include <stdio.h>


/*********** Pattern 1 *******

A
A B
A B C
A B C D
A B C D E

******************************/
void pattern1(int n)
{
	int i,j;
	for(i=1; i<=n; i++)
	{
	    char ch = 'A';
	    for(j=1; j<=i; j++)
	    	printf("%c ", ch++);

	    printf("\n");
	}
}


/*********** Pattern 2 *******

A
B B
C C C
D D D D
E E E E E

******************************/
void pattern2(int n)
{
	int i,j;
	char ch = 'A';
	for(i=1; i<=n; i++)
	{
	    for(j=1; j<=i; j++)
	    	printf("%c ", ch);

	    ch++;
	    printf("\n");
	}
}

/*********** Pattern 3 *******

A A A A A
B B B B
C C C
D D
E

******************************/
void pattern3(int n)
{
        int i,j;
        char ch = 'A';
        for(i=1; i<=n; i++)
        {
            for(j=n; j>=i; j--)
                printf("%c ", ch);

            ch++;
            printf("\n");
        }
}


/*********** Pattern 4 *******

A B C D E
F G H I
J K L
M N
O

******************************/
void pattern4(int n)
{
	int i,j;
	char ch = 'A';
	for(i=1; i<=n; i++)
	{
	    for(j=n; j>=i; j--)
	    	printf("%c ", ch++);

	    printf("\n");
	}
}

/*********** Pattern 5 *******

A
B C
D E F
G H I J
K L M N O

******************************/
void pattern5(int n)
{
        int i,j;
        char ch = 'A';
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=i; j++)
                printf("%c ", ch++);

            printf("\n");
        }
}




int main()
{
	int n;
	printf("Enter a no. : ");
	scanf("%d", &n);

	pattern1(n);
	printf("\n\n");
	pattern2(n);
	printf("\n\n");
	pattern3(n);
	printf("\n\n");
	pattern4(n);
	printf("\n\n");
	pattern5(n);
	printf("\n\n");

	return 0;
}
