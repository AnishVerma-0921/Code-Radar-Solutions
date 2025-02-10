#include <stdio.h>
#include<ctype.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char c;
    scanf("%c",&c);
    if (c>='A'&& c<='Z'){
        printf("Uppercase");
    }
    else if(c>='a' && c<='z'){
        printf(islower(c));
    }
    else{
        printf("Not an alphabet");
    }

}