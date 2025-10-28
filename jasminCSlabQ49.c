#include<stdio.h>
int main(){
	int n,num,mod,rev=0;
	printf("Enter a number:");
	scanf("%d",&n);
	while(n>0){
		mod=n%10;
		rev=rev*10+mod;
		n/=10;		
	}
	printf("The reverse of is:%d",rev);
	return 0;
	
}
