#include<stdio.h>
struct height{
	int feet;
	int inch;
};
int main(){
	struct height h1,h2,sum;
	int extra=12,new_inch;
	printf("Enter height (in feet) for person 1:");
	scanf("%d",&h1.feet);
	printf("Enter height (in inch) for person 1:");
	scanf("%d",&h1.inch);
	printf("Enter height (in feet) for person 1:");
	scanf("%d",&h2.feet);
	printf("Enter height (in inch) for person 1:");
	scanf("%d",&h2.inch);
	sum.feet= h1.feet+h2.feet;
	sum.inch=h1.inch+h2.inch;
	if(sum.inch>12){
		sum.feet=sum.feet+1;
		new_inch=sum.inch-extra;
		sum.inch=new_inch;	
	}
	printf("Their sum is: %dft %dinch",sum.feet,sum.inch);
	return 0;
}
