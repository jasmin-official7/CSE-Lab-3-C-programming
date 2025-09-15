#include <stdio.h>
int main()
{
int maths,english,physics,biology,chemistry,avg;
printf("Enter maths marks:");
scanf("%d",&maths);
printf("Enter english marks:");
scanf("%d",&english);
printf("Enter physics marks:");
scanf("%d",&physics);
printf("Enter biology marks:");
scanf("%d",&biology);
printf("Enter chemistry marks:");
scanf("%d",&chemistry);
avg=((maths+english+physics+biology+chemistry)/5);
if(avg>=90){
	printf("O GRADE:");
}
else if(avg>=80){
	printf("A+ GRADE");
}
else if(avg>=70){
	printf("A GRADE");
}
else if(avg>=60){
	printf("B+ GRADE");
}
else if(avg>=50){
	printf("B GRADE");
}
else if(avg<=40){
	printf("FAIL");
}
return 0;
}
	

