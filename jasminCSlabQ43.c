#include<stdio.h>
int main(){
	int n;
	printf("Enter weight of the parcels:");
	scanf("%d",&n);
	switch(n/10){
		case 1: printf("the charge of the parcel is rupees:%d",n*30);
		break;
		case 2: printf("the charge of the parcel is rupees:%d",(10*30)+(n-10)*20);
		break;
		default: printf("the charge of the parcel is rupees:%d",(10*30)+(20*20)+(n-30)*15);
		break;	
	}
	return 0;
}
