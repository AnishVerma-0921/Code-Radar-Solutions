#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char a;
    scanf("%c",&a);
    if(a>='A' && a<='Z'){
        if(a=='A' || a=='E' || a=='I' || a=='O' || a=='U'){
            printf("Vowel");
        }
        else{
            printf("Consonant");
        }
    }
    else if(a>='a' && a<='z'){
        if(a=='a'|| a=='e' || a=='i' || a=='o' || a=='u'){
            printf("Vowel");
        }
        else{
            printf("Consonant");
        }
    }
    else if(a>=0 && a<=9){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
    

}