#include<stdio.h>
int main(){
	int n,x,y;
	printf("Enter a number:");
	scanf("%d",&n);
	x=(n/10)*10;
	y=n-x;
	if(y==7||n%7==0){
		printf("The number is a buzz number\n");
	}else{
		printf("Not a buzz number\n");
	}
	if(n%2==0){
		printf("EVEN number\n");
	}else{
		printf("ODD number\n");
	}
	if(n<=0){
		printf("NEGATIVE number\n");
	}else{
		printf("POSITIVE number\n");
	}
	return 0;
}
