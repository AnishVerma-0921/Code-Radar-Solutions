#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    if((b+c)>a || (a+b)>c || (a+c)>b){
        printf("Valid");
    }
    else {
        printf("Invalid")
    }
}