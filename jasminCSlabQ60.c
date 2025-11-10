#include <stdio.h>
int main(){
	int arr_1[10][10], arr_2[10][10],arr_sum[10][10] ;
	int i,j,n,m;
	printf("Enter the number of rows (n): ");
    scanf("%d", &n);
    printf("Enter the number of columns (m): ");
    scanf("%d", &m);
    for(i=0;i<n;i++){
    	for(j=0;j<m;j++){
    		printf("Enter element for matrix 1 [%d][%d]: ", i, j);
            scanf("%d",&arr_1[i][j]);
		}
	}
	
	for(i=0;i<n;i++){
    	for(j=0;j<m;j++){
    		printf("Enter element for matrix 2 [%d][%d]: ", i, j);
            scanf("%d", &arr_2[i][j]);
		}
	}
	
	for(i=0;i<n;i++){
    	for(j=0;j<m;j++){
    		arr_sum[i][j]=arr_1[i][j]+arr_2[i][j];
		}
	}
	
	printf("Sum of two matrix is:\n");
	for(i=0;i<n;i++){
    	for(j=0;j<m;j++){
    		printf("%d\t",arr_sum[i][j]);
		}
		printf("\n");
	}
	return 0;
}

