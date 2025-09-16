#include <stdio.h>
int main()
{
	int n,i,sum=0;
	printf("Enter a natural number n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("the sum of %d natural number is: %d",n,sum);
	return 0;
}
