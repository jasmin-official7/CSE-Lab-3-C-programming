#include<stdio.h>
int fibo(int n);

int main(){
	int a,i;
	printf("Enter a number for fibonacci series:");
	scanf("%d",&a);
	for(i=0;i<a;i++){
		printf("%d\t",fibo(i));
	}
	return 0;
}

int fibo(int n){
	if(n==0){
		return 0;
	}
	if(n==1){
		return 1;
	}
	int fibo_n1= fibo(n-1);
	int fibo_n2= fibo(n-2);
	int fibo_n= fibo_n1+fibo_n2;
	return fibo_n;
	
}

