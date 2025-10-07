#include<stdio.h>
int main(){
	int n;
	printf("Enter your age:");
	scanf("%d",&n);
	switch(n){
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
            printf("NOT ELIGIBLE for voting");
			break;
		default:
			printf("ELIGIBLE for voting");
	}
	return 0;
}
