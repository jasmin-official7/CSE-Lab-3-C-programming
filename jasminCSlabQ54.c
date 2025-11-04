#include<stdio.h>
int sum_natural(int n);

int main(){
	int result= sum_natural(10);
	printf("result is: %d",result);
	return 0;
}

int sum_natural(int n){
	int i,sum=0;
	for(i=1;i<=n;i++){
		sum=sum+(2*i);
	}
	return sum;
}

