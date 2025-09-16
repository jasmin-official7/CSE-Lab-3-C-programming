#include <stdio.h>
int main()
{
	int n,i,s=0,a=0,b=1,x;
	printf("Enter a number for sum of fibonnaci series:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d\t",a);
		s=s+a;
		x=a+b;
		a=b;
		b=x;
	}
	printf("\nthe sum of fibonnaci series is:%d",s);
	return 0;
}
