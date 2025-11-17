#include<stdio.h>
void _swap(int *a,int *b);

int main(){
	int x,y;
	x=3;
	y=5;
	printf("initially: ");
	printf("a=%d and b=%d\n",x,y);
	printf("After swaping: ");
	_swap(&x,&y);
	return 0;
}	
void _swap(int *a,int *b){
	int t=*a;
	*a=*b;
	*b=t;
	printf("a=%d and b=%d\n",*a,*b);
}
