#include <stdio.h>
int Composite(int num) {
	int i;
    if (num <= 1) {
        return 0;
    }
    for (i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 1; 
        }else{
        	return 0;
		}
    }
}

int main() {
    int choice, number;
    printf("Enter 1 to Check if a number is composite:");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter a number: ");
            scanf("%d", &number);
            
            if (Composite(number)) {
                printf("%d is a composite number.\n", number);
            } else {
                printf("%d is not a composite number.\n", number);
            }
            break;
        default:
            printf("Invalid choice.\n");
            break;
    }

    return 0;
}

