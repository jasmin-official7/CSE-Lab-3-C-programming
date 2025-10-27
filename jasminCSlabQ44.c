#include<stdio.h>
#include<math.h>
int main(){
	int n,choice,num,sum=0,count=0,sq,digit,a;
    printf("1. Check Narcissistic Number\n");
    printf("2. Check Automorphic Number\n");
    printf("Enter your choice:");
    scanf("%d",&choice);
    printf("Enter a number:");
    scanf("%d",&n);
    switch(choice){
    	case 1:
    		num=n;
    		while(num!=0){
    			num=num/10;
    			count++;
			}
			num=n;
			while(num!=0){
				digit=num%10;
				sum=sum+pow(digit,count);
				num=num/10;
			}
			if(sum==n){
				printf("NARCISSISTIC number\n");
			}
			else{
				printf("not a NARCISSISTIC number\n");
			}
			break;
		case 2:
            sq=n*n;
            num=n;
            a=1;
            while(num>0){
             if((num % 10)!=(sq%10)){
                a=0;
                break;
				}
             num=num/10;
             sq=sq/10;
            }
        if(a== 1)
        printf("%d is an Automorphic number.\n", n);
        else
        printf("%d is NOT an Automorphic number.\n", n);
        break;
	    default:
	    	printf("invalic input");
        }
    return 0;
}
  
