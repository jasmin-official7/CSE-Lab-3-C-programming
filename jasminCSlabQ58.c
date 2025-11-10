#include <stdio.h>
int main(){
	int arr[20];
	int n,max,min,i;
	printf("Enter the number of element it the array: ");
	scanf("%d",&n);
	printf("Now enter %d elemets:\n",n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);		
	}
	max=arr[0];
	min=arr[0];
	for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i]; 
        }
        if (arr[i] < min) {
            min = arr[i]; 
        }
    }

	printf("\nThe maximum digit in the array is: %d\n",max);
	printf("The minimum digit in the array is: %d",min);
	
	return 0;
}

