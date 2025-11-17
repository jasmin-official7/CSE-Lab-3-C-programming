#include<stdio.h>
#include<string.h>
struct library_book{
	char book_name[100];
	int book_id;
	float book_price;
};
int main(){
	int i;
	struct library_book books[10];
	printf("Enter 10 book details:\n");
	for(i=0;i<10;i++){
		printf("Enter book no. %d details:\n",i+1);
		printf("Enter book name:");
		scanf("%s",&books[i].book_name);
		printf("Enter book id:");
		scanf("%d",&books[i].book_id);
		printf("Enter book price:");
		scanf("%f",&books[i].book_price);
		printf("\n");
	}
	
	printf("Your book details are:\n");
	for(i=0;i<10;i++){
		printf("Book no. %d:",i+1);
		printf("Book name is:%s",books[i].book_name);
		printf("Book name is:%d",books[i].book_id);
		printf("Book name is:%.2f",books[i].book_price);
	}
	return 0;
}
