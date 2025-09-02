#include <stdio.h>
int main()
{
	int a,b,c;
	printf("Enter value for a:");
	scanf("%d",&a);
	printf("Enter value for b:");
	scanf("%d",&b);
	printf("Enter value for c:");
	scanf("%d",&c);
	if(a>b && a>c)
	{
		printf("a is the greatest");
	}
	else if(b>a && b>c)
	{
		printf("b is the greatest");
	}
	else
	{
		printf("c is the greatest");
	}
	return 0;
}