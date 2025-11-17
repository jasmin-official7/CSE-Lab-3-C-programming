#include<stdio.h>
struct complex_num{
	int real;
	int imaginary;
};
int main(){
	struct complex_num com_1,com_2,sum;
	printf("Enter real part number of complex number 1:");
	scanf("%d",&com_1.real);
	printf("Enter imaginary part number of complex number 1:");
	scanf("%d",&com_1.imaginary);
	printf("Enter real part number of complex number 2:");
	scanf("%d",&com_2.real);
	printf("Enter imaginary part number of complex number 2:");
	scanf("%d",&com_2.imaginary);
	sum.real= com_1.real+com_1.imaginary;
	sum.imaginary=com_2.real+com_2.imaginary;
	printf("Their sum is: %d + %di",sum.real,sum.imaginary);
	return 0;
}
