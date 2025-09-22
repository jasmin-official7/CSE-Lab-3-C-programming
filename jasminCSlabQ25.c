#include <stdio.h>
int main() {
    int num1, num2, num3;
    printf("Enter value for num1:");
	scanf("%d",&num1);
	printf("Enter value for num2:");
	scanf("%d",&num2);
	printf("Enter value for num3:");
	scanf("%d",&num3);
    if (num1 >= num2) { 
        if (num1 >= num3) { 
            printf("%d is the maximum number.\n", num1);
        } else { 
            printf("%d is the maximum number.\n", num3);
        }
    } 
	else {
        if (num2 >= num3) { 
            printf("%d is the maximum number.\n", num2);
        } else { 
            printf("%d is the maximum number.\n", num3);
        }
    }

    return 0; 

}
