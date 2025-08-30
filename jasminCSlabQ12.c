#include <stdio.h>
#include <math.h>
int main()
{
 float ci,r,p,t,k,x;
 printf("Enter principle value:");
 scanf("%f",&p);
 printf("\nEnter rate of interest:");
 scanf("%f",&r);
 printf("\nEnter time:");
 scanf("%f",&t);
 k=(1+r);
 x=pow(k,t);
 ci=p*x;
 printf("\nthe compount interest is:%.2f",ci);
 return 0;
}
