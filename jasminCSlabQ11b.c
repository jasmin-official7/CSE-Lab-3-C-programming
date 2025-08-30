#include <stdio.h>
int main()
{
 int n,a,b,c;
 printf("Enter an integer value:");
 scanf("%d",&n);	
 a=n/10;
 b=a*10;
 c=n-b;
 printf("The last digit of the integer is: %d",c);
 return 0;

}
