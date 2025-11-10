#include<stdio.h>
#include<string.h>
int main(){
    char str[20],str_2[20];
    int i;
    printf("Enter a string: ");
    gets(str);
    for(i=0;str[i]!='\0';i++){
    str_2[i]=str[i];
    }
    printf("copied string:%s",str_2);
    return 0;
}

