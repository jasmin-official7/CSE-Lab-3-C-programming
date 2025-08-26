#include <stdio.h>
#include <math.h>
int main()
{
 float ci,r,p,t,k,cee;
 printf("Enter principle value:");
 scanf("%f",&p);
 printf("\nEnter rate of interest:");
 scanf("%f",&r);
 printf("\nEnter time:");
 scanf("%f",&t);
 k=(1+r);
 ci=pow(k,t);
 cee=p*ci;
 printf("\nthe compount interest is:%.2f",cee);
 return 0;
}