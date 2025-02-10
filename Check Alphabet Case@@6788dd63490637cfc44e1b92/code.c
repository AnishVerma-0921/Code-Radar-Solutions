#include <stdio.h>
#include<ctype.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char c;
    scanf("%c",&c);
    if (isupper(c)){
        printf("Uppercase");
    }
    else if(islower(c)){
        printf("Lowercase");
    }
    else{
        printf("Not an alphabet");
    }

}