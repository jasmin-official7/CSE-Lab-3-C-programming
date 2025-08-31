#include <stdio.h>
#include <math.h> 
int main() 
{
    float a,b;
    printf("Enter positive num value:");
    scanf("%f",&a);
    printf("Enter negative num value:");
    scanf("%f",&b);
    printf("\nFloor value for positive num a:%.2f",floor(a));
    printf("\nCeil value for positive num a:%.2f",ceil(a));
    printf("\nFloor value for negative num b:%.2f",floor(b));
    printf("\nCeil value for negative num b:%.2f",ceil(b));
    return 0;
}
