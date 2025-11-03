#include<stdio.h>
int main(){
	int i,j,k,n;
	for(i=1;i<=4;i++){
		for(j=1;j<=i;j++){
			printf("%d", j);
		}
		for(k=1; k<=((3 - i) * 2)+1; k++) {
            printf(" ");
        }
		for (n=i;n>=1;n--){
			if(n==4){
				continue;
			}
            printf("%d", n);
        }
        printf("\n");
    }    
	return 0;
}

