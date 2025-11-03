#include<stdio.h>
int main(){
	int n,num,mod,rev=0,number;
	printf("Enter a number:");
	scanf("%d",&n);
	number=n;
	while(n>0){
		mod=n%10;
		rev=rev*10+mod;
		n/=10;		
	}
	printf("The reverse of %d is:%d",number,rev);
	return 0;
	
}
