#include <stdio.h>
int main()
{
 int l,b,area,perimeter;
 printf("Enter the length of rectangle:");
 scanf("%d",&l);
 printf("Enter the breath of rectangle:");
 scanf("%d",&b);	
 area=l*b;
 perimeter=2*(l+b);
 printf("Area of rectangle is: %d" ,area);
 printf("\nPerimeter of rectangle is: %d" ,perimeter);
 return 0;
}