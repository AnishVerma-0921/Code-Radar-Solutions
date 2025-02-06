#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char a[50];
    int b;
    char c[50];
    scanf("%s%d%s",&a,&b,&c);
    printf("Name: %s\nAge: %d\nHobby: %s",a,b,c);
}