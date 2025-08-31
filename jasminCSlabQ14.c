#include <stdio.h>
#include <math.h> 
int main() 
{
    int a,b;
    printf("Enter positive integer value:");
    scanf("%d",&a);
    printf("Enter negative integer value:");
    scanf("%d",&b);
    printf("\nFloor value for positive integer a:%.2f",floor(a));
    printf("\nCeil value for positive integer a:%.2f",ceil(a));
    printf("\nFloor value for negative integer b:%.2f",floor(b));
    printf("\nCeil value for negative integer b:%.2f",ceil(b));
    return 0;
}
