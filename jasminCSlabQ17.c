#include <stdio.h>
int main()
{
	int a;
	printf("Enter an integer:");
	scanf("%d",&a);
	if(a%2==0)
	{
		printf("the given integer is EVEN");
	}
	else
	{
		printf("the given integer is ODD");
	}
	return 0;
}

