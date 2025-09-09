#include <stdio.h>
int main()
{
char x;
printf("Enter an alphabet:");
scanf("%c",&x);
switch(x)
{
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
      printf("%c is a VOWEL.\n", x);
      break;
	default:printf("%c is a consonant",x);
}
return 0;
}
	
