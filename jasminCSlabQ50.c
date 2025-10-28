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
	if(number==rev){
		printf("this number is a palindrome number");
	}
	else{
		printf("not a palindrome number");
	}
	return 0;
	
}
