#include <stdio.h>
int main()
{
	int a;
	printf("Enter number 0 or 1:");
	scanf("%d",&a);
	if(a==1)
	{
		printf("you got HEAD");
	}
	else
	{
		printf("you got TAIL");
	}
	return 0;
}