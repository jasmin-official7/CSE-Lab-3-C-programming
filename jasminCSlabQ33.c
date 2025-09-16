#include <stdio.h>
int main()
{
	int n,i,factorial;
	printf("Enter a number n to get factorial:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		factorial=factorial*i;
	}
	printf("the factorial is: %d",factorial);
	return 0;
}
