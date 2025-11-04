#include<stdio.h>
int gcd(int a,int b);

int main(){
	int x,y;
	printf("Enter number x:");
	scanf("%d",&x);
	printf("Enter number y:");
	scanf("%d",&y);
	printf("gcd is:%d",gcd(x,y));
	return 0;
}

int gcd(int a,int b){
	if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}


