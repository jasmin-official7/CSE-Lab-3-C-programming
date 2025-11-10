#include<stdio.h>
#include<string.h>
int main(){
    char str[20];
    int i,s=0;
    printf("Enter a string: ");
    gets(str);
    for(i=0;str[i]!='\0';i++){
    s++;
    }
    printf("Length of the string = %d\n",s);
    return 0;
}

