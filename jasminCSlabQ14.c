#include <stdio.h>
#include <math.h> 
int main() 
{
    int a,b;
    float c,d;
    printf("Enter positive integer value:");
    scanf("%d",&a);
    printf("Enter negative integer value:");
    scanf("%d",&b);
    printf("Enter positive decimal value:");
    scanf("%f",&c);
    printf("Enter negative decimal value:");
    scanf("%f",&d);
    printf("\nFloor value for positive integer a:%.2f",floor(a));
    printf("\nCeil value for positive integer a:%.2f",ceil(a));
    printf("\nFloor value for negative integer b:%.2f",floor(b));
    printf("\nCeil value for negative integer b:%.2f",ceil(b));
    printf("\nFloor value for positive float c:%.2f",floor(c));
    printf("\nCeil value for negative float c:%.2f",ceil(c));
    printf("\nFloor value for positive float d:%.2f",floor(d));
    printf("\nCeil value for negative float d:%.2f",ceil(d));
    return 0;
}