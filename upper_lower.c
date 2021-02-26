#include <stdio.h>

int main()
{
  char ch;
  printf("Press any key : ");
  scanf("%c",&ch);

  if(ch>=65&&ch<=90)
    printf("Upper case = %c\n",ch);
  else if(ch>=97&&ch<=122)
    printf("Lower case = %c\n",ch);
  else
    printf("Pressed key is a digit or special character = %c\n",ch);

  return 0;
}
