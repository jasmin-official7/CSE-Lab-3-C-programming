#include<stdio.h>
int main(){
	int n,first,second,num;
	printf("Enter a two digit number:");
	scanf("%d",&n);
	first= n/10;
	second= n%10;
	num=((first+second)+(first*second));
	if(num==n){
		printf("is a special 2-digit number");
	}
	else{
		printf("not a special 2-digit number");
	}
	return 0;
}
