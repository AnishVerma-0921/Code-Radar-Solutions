#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char x[50];
    char i[50];
    scanf("%s %s",&x,&i);
    printf("You entered: %s and %s",x,i);
    return 0;
}