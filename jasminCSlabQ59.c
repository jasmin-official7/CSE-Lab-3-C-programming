#include <stdio.h>
int main(){
	int arr[20];
	int n,even=0,odd=0,i;
	printf("Enter the number of element it the array: ");
	scanf("%d",&n);
	printf("Now enter %d elemets:\n",n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		if(arr[i]%2==0){
			even+=1;
		}else{
			odd+=1;
		}
	}
	printf("the occurance of even numbers are: %d times\n",even);
	printf("and the occurance of odd numbers are: %d times\n",odd);
	return 0;
}

