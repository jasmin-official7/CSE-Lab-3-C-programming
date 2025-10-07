#include<stdio.h>
#include<math.h>
int main(){
	float a,b,c,p,s,area;
	printf("Enter side a of a triangle:");
	scanf("%f",&a);
	printf("Enter side b of a triangle:");
	scanf("%f",&b);
	printf("Enter side c of a triangle:");
	scanf("%f",&c);
	p=a+b+c;
	s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("perimeter is:%.2f\n",p);
	printf("area is:%.2f\n",area);
	if(p==area){
		printf("EQUABLE triangle");
	}
	else{
		printf("NOT EQUABLE triangle");
	}
	return 0;	
}

