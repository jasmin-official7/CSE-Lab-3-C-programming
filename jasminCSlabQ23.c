#include <stdio.h> 
int main()
{  
    char sing_ch;  

    printf("Input any alphabet : "); 
    scanf("%c", &sing_ch); 
    if(sing_ch=='a' || sing_ch=='e' || sing_ch=='i' || sing_ch=='o' || sing_ch=='u' || sing_ch=='A' || sing_ch=='E' || sing_ch=='I' || sing_ch=='O' || sing_ch=='U')  
    {  
        printf("The alphabet is a vowel.\n");  
    }  
    
    else  
    {  
      printf("The alphabet is a consonant.\n"); 
    }   
}
