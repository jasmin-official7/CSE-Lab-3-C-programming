#include <stdio.h>
void concatenate(char arr1[], const char arr2[]);

int main() {
    char str1[20] = "program "; 
    char str2[] = "run";

    concatenate(str1, str2);

    printf("Concatenated string: %s\n", str1);

    return 0;
}

void concatenate(char arr1[], const char arr2[]){
    int i = 0;
    int j = 0;

    while (arr1[i] != '\0') {
        i++;
    }

    while (arr2[j] != '\0') {
        arr1[i] = arr2[j];
        i++;
        j++;
    }

}

