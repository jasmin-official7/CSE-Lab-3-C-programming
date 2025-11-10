#include<stdio.h>

int linear_search(int array[],int n,int key_number);

int main(){
	int n;
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	printf("Enter number (1-10) which you want to search:");
	scanf("%d",&n);
	printf("%d found at index number: %d",n,linear_search(arr,10,n));
	return 0;
	
}

int linear_search(int array[],int n,int key_number){
	int i;
	for(i=0;i<n;i++){
		if(array[i]==key_number){
			return i;	
		}
	}	
}
