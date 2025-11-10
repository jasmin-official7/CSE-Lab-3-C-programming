#include <stdio.h>
#include <string.h>
int isPalindrome(char str[]);

int main() {
    char str1[] = "madam";
    char str2[] = "hello";

    if (isPalindrome(str1)) {
        printf("\"%s\" is a palindrome.\n", str1);
    } else {
        printf("\"%s\" is not a palindrome.\n", str1);
    }

    if (isPalindrome(str2)) {
        printf("\"%s\" is a palindrome.\n", str2);
    } else {
        printf("\"%s\" is not a palindrome.\n", str2);
    }

    return 0;
}

int isPalindrome(char str[]) {
    int length = strlen(str);
    int i, j;

    for (i = 0, j = length - 1; i < j; i++, j--) {
        if (str[i] != str[j]) {
            return 0; 
        }
    }
    return 1; 
}

