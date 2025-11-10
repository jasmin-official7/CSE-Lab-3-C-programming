#include <stdio.h>
int main(){
	int arr_1[10][10],arr_t[10][10];
	int i,j,n,m;
	printf("Enter the number of rows (n): ");
    scanf("%d", &n);
    printf("Enter the number of columns (m): ");
    scanf("%d", &m);
    for(i=0;i<n;i++){
    	for(j=0;j<m;j++){
    		printf("Enter element for matrix [%d][%d]: ", i, j);
            scanf("%d",&arr_1[i][j]);
		}
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			arr_t[i][j]=arr_1[j][i];
		}
	}
	
	printf("transpose of the matrix is:\n");
	for(i=0;i<n;i++){
    	for(j=0;j<m;j++){
    		printf("%d\t",arr_t[i][j]);
		}
		printf("\n");
	}
	return 0;
}

