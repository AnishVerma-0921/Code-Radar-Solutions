#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char x[50],i[50];
    scanf("%c%c",&x,&i);
    printf("You entered: %c and %c",x,i);
}